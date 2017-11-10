//
//  main.c
//  factorial
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    unsigned long long int fact=1;
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=num;i>1;i--)
        fact*=i;
    printf("The factorial of the number is: %llu\n",fact);
    return 0;
}