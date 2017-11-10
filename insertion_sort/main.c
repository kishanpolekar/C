//
//  main.c
//  insertion_sort
//
//  Created by Kishan on 12/26/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20];
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\nThe array when sorted using INSERTION SORT is: \n");
    for (i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (a[i-j]<a[i-j-1]) {
                a[i-j]=a[i-j]+a[i-j-1];
                a[i-j-1]=a[i-j]-a[i-j-1];
                a[i-j]=a[i-j]-a[i-j-1];
            }
        }
    }
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
