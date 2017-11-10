//
//  main.c
//  Minesweeper
//
//  Created by Kishan on 11/7/17.
//  Copyright © 2017 Kishan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int row, col, level;

    printf("\nMINESWEEPER\n\n");
    printf("Enter the number of rows in the game (MAX 100): ");
    scanf("%d", &row);
    printf("Enter the number of columns in the game (MAX 100): ");
    scanf("%d", &col);
    printf("Enter the difficulty level (1-10): ");
    scanf("%d", &level);
    
    if (row*col > 0 && row*col < 10000 && level >= 1 && level <= 10) {}
    
    else {
        
        printf("\nInvalid input!!\nExiting the program...\n\n");
        return 0;
    }
    
    return 0;
}
