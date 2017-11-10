//
//  main.c
//  selection_sort
//
//  Created by Kishan on 12/26/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20],min=0;
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\nThe array when sorted using SELECTION SORT is: \n");
    for (i=0;i<n-1;i++){
        min=a[i];
        for (int j=i+1;j<n;j++)
            if (a[j]<min)
                min=a[j];
        a[i]=a[i]+min;
        min=a[i]-min;
        a[i]=a[i]-min;
    }
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
