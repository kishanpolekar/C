//
//  main.c
//  BinaryRepresentation
//
//  Created by Kishan on 10/18/17.
//  Copyright © 2017 Kishan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {

    unsigned char x[]={ (1 << 7 | 1 << 6 | 0 << 5 | 0 << 4 | 1 << 3 | 0 << 2 | 1 << 1 | 0 << 0),
                        (0 << 7 | 1 << 6 | 1 << 5 | 0 << 4 | 0 << 3 | 1 << 2 | 0 << 1 | 1 << 0),
                        (0 << 7 | 1 << 6 | 1 << 5 | 1 << 4 | 1 << 3 | 0 << 2 | 0 << 1 | 0 << 0),
                        (1 << 7 | 1 << 6 | 0 << 5 | 1 << 4 | 0 << 3 | 1 << 2 | 1 << 1 | 1 << 0),
                        (1 << 7 | 0 << 6 | 0 << 5 | 1 << 4 | 0 << 3 | 1 << 2 | 1 << 1 | 0 << 0),
                        (0 << 7 | 1 << 6 | 0 << 5 | 1 << 4 | 1 << 3 | 0 << 2 | 1 << 1 | 1 << 0),
                        (1 << 7 | 1 << 6 | 0 << 5 | 1 << 4 | 1 << 3 | 1 << 2 | 0 << 1 | 1 << 0),
                        (1 << 7 | 1 << 6 | 1 << 5 | 1 << 4 | 1 << 3 | 1 << 2 | 1 << 1 | 1 << 0)}, *ptr=&x[0];
    int i=0;
    
    /*1.	Assume the data represents ASCII codes of eight characters*/
    
    printf("ASCII code to character translation.\n");
    for (i=0; i<8; i++) {
    
        printf("%d : %c\n", *ptr, (char)*ptr);
        ptr++;
    }
    return 0;
}
