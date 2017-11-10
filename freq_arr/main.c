//
//  main.c
//  freq_arr
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int a[20],n,i,f,freq=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nEnter the number whose frequency is to be searched: ");
    scanf("%d",&f);
    for (i=0; i<n; i++)
        if (a[i]==f)
            freq++;
    printf("\nThe frequency of the %d in the array is: %d\n",f,freq);
    return 0;
}
