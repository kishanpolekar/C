//
//  main.c
//  alphabet
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if ( isalpha(ch))
        printf("The character is an ALPHABET!\n");
    else printf("The character is NOT AN ALPHABET!\n");
    return 0;
}
