//
//  main.c
//  highest_3num
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        if (a>c)
            printf("%d is the greatest.\n",a);
        else
            printf("%d is the greatest.\n",c);
    }
    else {
        if (b>c)
            printf("%d is the greatest.\n",b);
        else
            printf("%d is the greatest.\n",c);
    }
    return 0;
}