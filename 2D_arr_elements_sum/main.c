//
//  main.c
//  2D_arr_elements_sum
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int m,n,sum=0;
    printf("Enter the number of rows in the 2-D array(max 10): ");
    scanf("%d",&m);
    printf("\nEnter the number of columns in the 2-D array(max 10): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the 2-D array: \n");
    int i=0,j=0,a[10][10];
    for (i=0; i<m; i++)
        for (j=0; j<n; j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    printf("\nThe 2-D array entered is: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("The sum of the elements in the 2-D array is: %d\n",sum);
    return 0;
}
