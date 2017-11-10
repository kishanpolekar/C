//
//  main.c
//  arr_int_rev
//
//  Created by Kishan on 6/5/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20];
    printf("Enter the number of elements in the integer array(max 20): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the integer array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe integer array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    for (i=0; i<(n/2); i++) {
        a[i]=a[i]+a[n-1-i];
        a[n-1-i]=a[i]-a[n-1-i];
        a[i]=a[i]-a[n-1-i];
    }
    printf("\nThe Reverse integer array is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
