//
//  main.c
//  binary_search
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20],item,m,f=0,lb=0,ub,mid;
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    m=n;
    ub=n;
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
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
    printf("\nThe sorted array is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\nEnter the element to be searched: ");
    scanf("%d",&item);
    while (f!=1) {
        if (ub<lb) {
            printf("Element not found!!\n");
            f=1;
        }
        mid=(lb+ub)/2;
        if (item==a[mid]) {
            printf("Element found at position %d.\n",mid+1);
            f=1;
        }
        else if (item<a[mid])
            ub=mid-1;
        else lb=mid+1;
    }
    return 0;
}
