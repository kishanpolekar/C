//
//  main.c
//  bubble_sort
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20],m=0;
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    m=n;
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\nThe array when sorted using BUBBLE SORT is: \n");
    while (m>0) {
        for (i=0; i<m-1; i++) {
            if (a[i]>a[i+1]) {
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
        m--;
    }
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
