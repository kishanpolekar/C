/*******************************************************************\
*                                                                   *
* Author:		Kishan Polekar                                      *
* UserID:		kxp30120@ucmo.edu                                   *
* Date:			Sep 11, 2017                                        *
* Project ID:	Problem 3.13                                        *
* CS Class:		CS3500                                              *
* Problem Description: Looks at the command line arguments, and     *
*                      reports if any of the arguments are the same.*
*                                                                   *
\*******************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int i, j, c=0;
    char d[10]; //String to store the already visited element
    printf("\n[[Duplicate element : Positions]]\n");
    for (i=0; i<argc; i++) { //Loops through each element once
        c=0; //Counter to print the duplicate element only once
        if (strcmp(argv[i], d)!=0)
            /* If the element is already printed, the condition will not be satisfied and thus, will not print the element again */
            for (j=i; j<argc-1; j++) { //Loops through all the elements till the end to compare the base element
                if (strcmp(argv[i], argv[j+1])==0) { //Duplicate element found on position j+1
                    if (c==0) {
                        /* Prints the element and the first place of occurance only once for each discrete element */
                        printf("\n%s : %d ", argv[i], i);
                        strcpy(d, argv[i]); //Stores the duplicate element for future checking
                        c=1;
                    }
                    printf(" %d ", j+1); //Prints all the subsequent occurances of the element
                }
        }
    }
    printf("\n\n");
    return 0;
}
