//
//  main.c
//  lar_arr
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
// PROGRAM NUMBER 2

#include <stdio.h>

int main() {
    int a[20],n,i,lar=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if (i>0)
            if (a[i]>lar)
                lar=a[i];
        else
            lar=a[0];
    }
    printf("The largest element in the array is: %d\n",lar);
    return 0;
}
