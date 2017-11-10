//
//  main.c
//  2D_arr_add
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int m,n,i=0,j=0,a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows in the 2-D arrays(max 10): ");
    scanf("%d",&m);
    printf("\nEnter the number of columns in the 2-D arrays(max 10): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the first 2-D array: \n");
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter the elements of the second 2-D array: \n");
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    printf("\nThe first 2-D array entered is: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nThe second 2-D array entered is: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    printf("\nThe sum array of the 2-D arrays entered is: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
