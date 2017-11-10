//
//  main.c
//  2D_arr_mul
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p;
    printf("Enter the number of ROWS in the FIRST array: ");
    scanf("%d",&m);
    printf("Enter the number of COLUMNS in the FIRST array: ");
    scanf("%d",&n);
    printf("Enter the number of COLUMNS in the SECOND array: ");
    scanf("%d",&p);
    printf("\nEnter the elements of the FIRST array: \n");
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter the elements of the SECOND array: \n");
    for (i=0; i<n; i++)
        for (j=0; j<p; j++)
            scanf("%d",&b[i][j]);
    printf("\nThe FIRST array entered is: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nThe SECOND array entered is: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<p; j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            for (k=0; k<p; k++)
                c[i][j]+=a[i][k]*b[k][j];
    printf("\nThe MULTIPLICATION array is: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
