//
//  main.c
//  arr_elements_sum
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20],s=0;
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n\nThe sum of the elements of the array is: %d\n",s);
    return 0;
}