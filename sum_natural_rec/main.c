//
//  main.c
//  sum_natural_rec
//
//  Created by Kishan on 5/26/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int add(int n) {
    if(n!=0)
        return n+add(n-1);
    else return 0;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Sum of natural numbers till %d: %d\n",n,add(n));
    return 0;
}