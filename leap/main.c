//
//  main.c
//  leap
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if (year%4!=0)
        printf("%d is NOT a leap year!\n",year);
    else printf("%d IS a leap year!\n",year);
    return 0;
}
