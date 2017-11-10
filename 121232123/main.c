//
//  main.c
//  121232123
//
//  Created by Kishan on 5/24/16.
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
        for(j=i;j>=1;j--)
            printf("%d",j);
        for(j=2;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}