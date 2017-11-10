//
//  main.c
//  pointer_sdpq
//
//  Created by Kishan on 5/28/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main()
{
    float *a,p,*b;
    printf("Enter the first number: ");
    scanf("%f",a);
    printf("Enter the second number: ");
    scanf("%f",&p);
    b=&p;
    printf("\nThe sum of the numbers is: %.2f",*a + *b);
    printf("\nThe difference of the numbers is: %.2f",*a - *b);
    printf("\nThe product of the numbers is: %.4f",*a * *b);
    printf("\nThe quotient of the first number to the second is: %.4f\n",*a / *b);
    return 0;
}