//
//  main.c
//  arr_element_delete
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20],item,from=-1;
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\nEnter the element to delete: ");
    scanf("%d",&item);
    for (i=0; i<n; i++)
        if (a[i]==item) {
            from=i;
            break;
        }
    if (from!=-1) {
        for (i=from; i<n-1; i++)
            a[i]=a[i+1];
        printf("\nThe array after deleting '%d' is: \n",item);
        for (i=0; i<n-1; i++)
            printf("%d\t",a[i]);
        printf("\n");
    }
    else printf("Element not found!!\n");
    return 0;
}
