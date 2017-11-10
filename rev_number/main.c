//
//  main.c
//  rev_number
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>
#include<math.h>

int main() {
    long int a,b,s=0;int c=0,d=0;
    printf("Enter a number: ");
    scanf("%ld",&a);
    b=a;
    while (b>0) {
        b=b/10;
        c=c+1;
    }
    while (a>0) {
        d=a%10;
        s+=d*(pow(10,c-1));
        a=a/10;
        c-=1;
    }
    printf("\nThe reverse of the number entered is: %ld\n",s);
    return 0;
}