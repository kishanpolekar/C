//
//  main.c
//  vowel
//
//  Created by Kishan on 6/4/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("The character is a VOWEL!\n");
    else printf("The character is a CONSONANT!\n");
    return 0;
}
