//
//  main.c
//  diamond
//
//  Created by Kishan on 5/25/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int till,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&till);
    for (i=1;i<=till;i++) {
        for (k=(till-i);k>=0;k--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    for (i=2; i<=till; i++) {
        for(j=1;j<=i;j++)
            printf(" ");
        for (k=(till-i);k>=0;k--)
            printf("* ");
        printf("\n");
    }
    return 0;
}