//
//  main.c
//  area_cir
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    float r, pi=(22.0/7),a,c;
    printf("Enter the radius: ");
    scanf("%f",&r);
    c=2*pi*r;
    a=pi*r*r;
    printf("\nThe circumference of the circle is: %.2f",c);
    printf("\nThe area of the circle is: %.2f\n",a);
    return 0;
}