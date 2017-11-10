
/*
 * This program opens a file "data.dat" in read and write mode. It writes a name of 8 characters (first character capitalized) followed by 10 randomly generated numbers
 * betweeen 50 and 100. It loops 28 times and ends. The contents of the file are the read and displayed on the screen.
 *
 * Author: Kishan Polekar
 * Date: 09/28/2017
 * User ID: 700663012
 */

#include <stdio.h>

int main (int argc , char ** argv) {
    
    int i, j, arr[10], a;
    char name[9], Name[9];
    FILE *fptr ;
    
    fptr=fopen("data.dat", "wb+");
    
    if (fptr==NULL) {
        
        fprintf(stderr, "File not found!\n");
        return -1;
    }
    
    srand(time(NULL));
    
    for (i=0; i<28; i++) {
        
        name[0]=(char)((rand()%26)+65);
        for (j=1; j<8; j++) {
            
            name[j]=(char)((rand()%26)+97);
        }
        name[8]='\0';
        fwrite(name, 1, sizeof(name), fptr);
        
        for (j=0; j<10; j++) {
            
            arr[j]=((rand()%50)+50);
        }
        for (j=0; j<10; j++) {
            
            fwrite(arr[j], 1, sizeof(arr[j]), fptr);
        }
        fwrite("\n", 1, 1, fptr);
    }
    fseek(fptr, 0, SEEK_SET);
    
    while (!feof(fptr)) {
        
        fread(&Name, sizeof(Name), 1, fptr);
        printf("%s\n", Name);
        
        for (j=0; j<10; j++) {
            
            fread(&a, sizeof(a), 2, fptr);
            printf("%d\t", a);
        }
        printf("\n");
    }
    fclose(fptr);
    
    return 0;
}
