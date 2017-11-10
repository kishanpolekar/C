//
//  main.c
//  string palindrome
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char s[50];int l=0,i,not=1;
    for (i=0; i<50; i++)
        s[i]='\0';
    printf("Enter the string: ");
    scanf("[^\n]%s",&s);
    l=strlen(s);
    for (i=0; i<((l+1)/2); i++)
        if (s[i]!=s[l-i-1]) {
            not=0;
            break;
        }
    if (not==1)
        printf("The string is PALINDROME!\n");
    else printf("The string is NOT PALINDROME!\n");
    return 0;
}
