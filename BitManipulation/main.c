//
//  main.c
//  BitManipulation
//
//  Created by Kishan on 10/26/17.
//  Copyright © 2017 Kishan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void show(unsigned, int, int);

void show(unsigned int n, int m, int ch) {

    int i=0;
    for (i=(sizeof(int)*8)-1; i>=0; i--) {
        
        printf("%u ", (n&(1<<i)) ? 1 : 0);
    }
    if ((ch>0 && ch<4) && (m>=0 && m<=31)) {
    
        printf("\nModified bit: \t");
        for (i=(sizeof(int)*8)-1; i>=0; i--) {
            
            printf("%c ", (i==m) ? (char)94 : (char)32);
        }
    }
    printf("\n\n");
}

int main(int argc, const char * argv[]) {
    
    int ch=0, set, clear, m=0;
    unsigned int temp=pow(2, (sizeof(int)*8))-1;
    unsigned int num=0;
    
    while (ch!=3) {
     
        printf("\nBIT MANIPULATION\n\n");
        
        printf("Integer value: \t%d\nBit value: \t\t", num);
        show(num, m, ch);
        
        printf("\n1- Set a bit\n2- Clear a bit\n3- Exit\n\nEnter your choice: ");
        scanf("%d", &ch);
        
        if (ch==1) {
        
            printf("\nSET A BIT\nEnter the bit position to set (0-31): ");
            scanf("%d", &set);
            
            if (!(set>=0 && set<32)) {
                
                printf("\nInvalid bit position entered!!\n");
                continue;
            }
            
            num=(num|(1<<set));
            m=set;
        }
        
        else if (ch==2) {
            
            printf("\nCLEAR A BIT\nEnter the bit position to clear (0-31): ");
            scanf("%d", &clear);
            
            if (!(clear>=0 && clear<32)) {
                
                printf("\nInvalid bit position entered!!\n");
                continue;
            }
            
            temp<<=clear+1;
            for (int i=clear-1; i>=0; i--) {
                
                temp=(temp|(1<<i));
            }
            num=(num&temp);
            m=clear;
        }
        
        else if (ch==3)
            printf("\nExiting the program...\n");
        
        else printf("\nPlease enter a valid choice!\n");
    }
    return 0;
}
