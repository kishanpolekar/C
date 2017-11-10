//
//  main.c
//  prime
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int num,i,f=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=2; i<((num+1)/2); i++)
        if (num%i==0) {
            f=1;
            break;
        }
    if (f==0)
        printf("The number is PRIME.\n");
    else printf("The number is NOT PRIME.\n");
    return 0;
}
