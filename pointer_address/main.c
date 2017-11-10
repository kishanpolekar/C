//
//  main.c
//  pointer_address
//
//  Created by Kishan on 6/2/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,*p;
    printf("Enter a number: ");
    scanf("%d",&a);
    *p=a;
    printf("The address of the pointer storing the value is: %x",p);
    printf("\nThe value stored in the pointer is: %d\n",*p);
    return 0;
}
