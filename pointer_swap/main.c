//
//  main.c
//  pointer_swap
//
//  Created by Kishan on 5/28/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int *p,a,b;
    printf("Enter the first number (a): ");
    scanf("%d",&a);
    printf("Enter the second number (b): ");
    scanf("%d",&b);
    *p=a;
    a=b;
    b=*p;
    printf("The numbers after swapping are: a=%d\tb=%d\n",a,b);
    return 0;
}
