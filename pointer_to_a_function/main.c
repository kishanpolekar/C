//
//  main.c
//  pointer_to_a_function
//
//  Created by Kishan on 6/2/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

void modify(int *q) {
    *q=20;
}
int main() {
    int a=10;
    printf("The value of 'a' is: %d",a);
    modify(&a);
    printf("\nThe new value of 'a' is: %d\n",a);
    return 0;
}
