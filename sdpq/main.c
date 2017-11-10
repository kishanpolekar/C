//
//  main.c
//  sdpq
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    float a,b;int ch;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("\n1-Sum\n2-Difference\n3-Product\n4-Quotient\nEnter your choice: ");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            printf("\nThe sum of the numbers is: %f\n",a+b);
            break;
        case 2:
            printf("\nThe difference of the numbers is: %f\n",a-b);
            break;
        case 3:
            printf("\nThe product of the numbers is: %f\n",a*b);
            break;
        case 4:
            printf("\nThe quotient of the first number to the second is: %f\n",a/b);
            break;
        default:
            printf("\nWrong Choice Entered!!\n");
            break;
    }
    return 0;
}