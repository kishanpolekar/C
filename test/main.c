//
//  main.c
//  test
//
//  Created by Kishan on 8/29/17.
//  Copyright © 2017 Kishan. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 200

int cmpfunc (const void * a1, const void * b1)
{
    return ( *(int*)a1 - *(int*)b1 );
}

int main(int argc, const char * argv[]) {

    int n[MAX_SIZE];
    for (int i=0; i<MAX_SIZE; i++) {
        
        n[i]=i;
    }
    for (int i=0; i<MAX_SIZE; i++) {
        
        printf("%d\n",n[i]);
    }
    srand(time(NULL));
    int index=((int)rand())%MAX_SIZE;
    printf("Element at random index %d = %d\n", index, n[index]);
    for (int i=0; i<MAX_SIZE; i++) {
        
        n[i]=(int)rand()%1000;
    }
    for (int i=0; i<MAX_SIZE; i++) {
        
        printf("%d\n",n[i]);
    }
    int sum=0;
    for (int i=0; i<MAX_SIZE; i++) {
        
        sum+=n[i];
    }
    printf("Sum of the elemets: %d\n", sum);
    sum=0;
    int i=0;
    while (i<MAX_SIZE) {
        
        sum+=n[i];
        i++;
    }
    printf("Sum of the elemets: %d\n", sum);
    int min=n[0];
    for (int i=0; i<MAX_SIZE; i++) {
        
        if (min>n[i])
            min=n[i];
    }
    printf("Minimum: %d\n", min);
    
    int a[11], b[34];
    for (int i=0; i<11; i++) {
        
        b[i]=a[i];
    }
    for (int i=0; i<11; i++) {
        
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i=0; i<34; i++) {
        
        printf("%d\t", b[i]);
    }
    printf("\n");
    int c[11], d[11];
    for (int i=0; i<11; i++) {

        c[i]=(int)rand()%1000;
    }
    for (int i=0; i<11; i++) {
        
        d[11-i-1]=c[i];
    }
    for (int i=0; i<11; i++) {
        
        printf("%d\t", c[i]);
    }
    printf("\n");
    for (int i=0; i<11; i++) {
        
        printf("%d\t", d[i]);
    }
    printf("\n");
    qsort(n, MAX_SIZE, sizeof(int), cmpfunc);
    for (int i=0; i<MAX_SIZE; i++) {
        
        printf("%d\t",n[i]);
    }
    printf("\n");
    int m[2][MAX_SIZE], count;
    for (i=0; i<MAX_SIZE; i++) {
        
        count=1;
        while (n[i]==n[i+1]) {
            
            count++;
            i++;
        }
        m[0][i]=n[i];
        m[1][i]=count;
    }
    printf("Element\tFrequency\n");
    for (int i=0; i<MAX_SIZE; i++) {
        
        if (m[0][i]!=0 || i==0)
            printf("%d\t\t%d\n",m[0][i],m[1][i]);
    }
    printf("\n");
    return 0;
}
