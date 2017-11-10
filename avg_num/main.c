//
//  main.c
//  avg_num
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    float a,b,avg;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    avg=(a+b)/2;
    printf("\nThe average of the two numbers is: %.2f\n",avg);
    return 0;
}