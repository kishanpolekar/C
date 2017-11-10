//
//  main.c
//  linear_search
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,a[20],item,at=-1;
    printf("Enter the number of elements in the array(max 20): ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe array entered is: \n");
    for (i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\nEnter the element to be searched: ");
    scanf("%d",&item);
    for (i=0; i<n; i++)
        if (a[i]==item) {
            at=i+1;
            break;
        }
    if (at!=-1)
        printf("Element found at position %d.\n",at);
    else printf("Element not found!\n");
    return 0;
}
