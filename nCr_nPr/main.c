//
//  main.c
//  nCr_nPr
//
//  Created by Kishan on 5/25/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

unsigned long long int fact(int num) {
    unsigned long long int f=1;
    if (num<=1)
        return 1;
    else
        f=num*fact(num-1);
    return f;
}

void nPr(int n,int r) {
    unsigned long long int P;
    P=fact(n)/fact(n-r);
    printf("\nThe value of %dP%d is: %llu\n",n,r,P);
}

void nCr(int n,int r) {
    unsigned long long int C;
    C=fact(n)/(fact(n-r)*fact(r));
    printf("\nThe value of %dC%d is: %llu\n",n,r,C);
}

int main() {
    int n,r,ch,num;
    printf("1-Permutation (nPr)\n2-Combination (nCr)\n3-Square\n4-Cube\nEnter your choice: ");
    scanf("%d",&ch);
    if (ch==1 || ch==2) {
        printf("\nEnter the value of 'n': ");
        scanf("%d",&n);
        printf("Enter the value of 'r': ");
        scanf("%d",&r);
        if (ch==1)
            nPr(n,r);
        else
            nCr(n,r);
    }
    else if (ch==3 || ch==4) {
        printf("\nEnter the number: ");
        scanf("%d",&num);
        if (ch==3)
            printf("\nThe Square of the number is: %d\n",num*num);
        else
            printf("\nThe Cube of the number is: %d\n",num*num*num);
    }
    else printf("\nWrong choice entered!!\n");
    return 0;
}