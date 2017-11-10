//
//  main.c
//  area_func
//
//  Created by Kishan on 5/26/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

void triangle() {
    float base,height,area;
    printf("\nEnter the base length: ");
    scanf("%f",&base);
    printf("Enter the value height: ");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("The area of the Triangle (in square units) is: %f\n",area);
}
void rectangle() {
    float length,breadth,area;
    printf("\nEnter the length: ");
    scanf("%f",&length);
    printf("Enter the breadth: ");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("The area of the Rectangle (in square units) is: %f\n",area);
}
void cylinder() {
    float radius,height,area,pi=22.0/7;
    printf("\nEnter the radius length: ");
    scanf("%f",&radius);
    printf("Enter the value height: ");
    scanf("%f",&height);
    area=pi*radius*radius*height;
    printf("The area of the Cylinder (in square units) is: %f\n",area);
}
int main() {
    int ch;
    printf("1-Area of a Triangle\n2-Area of a Rectangle\n3-Area of a Cylinder\nEnter your choice: ");
    scanf("%d",&ch);
    if (ch==1)
        triangle();
    else if (ch==2)
        rectangle();
    else if (ch==3)
        cylinder();
    else printf("\nWrong choice entered!!\n");
    return 0;
}