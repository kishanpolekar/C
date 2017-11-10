//
//  main.c
//  sum_digit
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num>0) {
        sum+=(num%10);
        num/=10;
    }
    printf("The sum of the digits of the number is: %d\n",sum);
    return 0;
}