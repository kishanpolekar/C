//
//  main.c
//  swap number
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int a=0,b=0,t;
    // WITH TEMPORARY VARIABLE
    printf("WITH TEMPORARY VARIABLE\n");
    printf("\nEnter the first number (a): ");
    scanf("%d",&a);
    printf("Enter the second number (b): ");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("The numbers after swapping are: a=%d\tb=%d\n",a,b);
    // WITHOUT TEMPORARY VARIABLE
    printf("\nWITHOUT TEMPORARY VARIABLE\n");
    printf("\nEnter the first number (a): ");
    scanf("%d",&a);
    printf("Enter the second number (b): ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping are: a=%d\tb=%d\n",a,b);
    return 0;
}