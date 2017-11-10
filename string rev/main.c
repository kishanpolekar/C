//
//  main.c
//  string rev
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char a[50],b[50];int len,i;
    printf("Enter a string: ");
    scanf("%[^\n]s",a);
    len=strlen(a);
    for (i=0;i<50;i++)
        b[i]='\0';
    for (i=0;i<len;i++)
        b[len-i-1]=a[i];
    printf("\nThe reverse of the sting entered is: '%s'\n",b);
    return 0;
}