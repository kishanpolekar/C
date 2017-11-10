//
//  main.c
//  string_operations
//
//  Created by Kishan on 9/14/17.
//  Copyright © 2017 Kishan. All rights reserved.
//

#include <stdio.h>

void addition(char i1[], char i2[], char oper, int i1_count, int i2_count, int input_count) {

    if (i1_count>i2_count) {
        
        char s[i1_count];
        int s1[i1_count];
        
        for (int i=0; i<i2_count; i++) {
            
            int check=((int)i1[i]-96)+((int)i2[i]-96);
            if (check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i2_count; i<i1_count; i++)
            s1[i]=((int)i1[i]-96);
        
        for (int i=0; i<i1_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else if (i2_count>i1_count) {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i1_count; i++) {
            
            int check=((int)i1[i]-96)+((int)i2[i]-96);
            if (check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i1_count; i<i2_count; i++)
            s1[i]=((int)i2[i]-96);
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i2_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i2_count; i++) {
            int check=((int)i1[i]-96)+((int)i2[i]-96);
            if (check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
}

void subtraction(char i1[], char i2[], char oper, int i1_count, int i2_count, int input_count) {

    if (i1_count>i2_count) {
        
        char s[i1_count];
        int s1[i1_count];
        
        for (int i=0; i<i2_count; i++) {
            
            int check=((int)i1[i]-96)-((int)i2[i]-96);
            if (check>0)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i2_count; i<i1_count; i++)
            s1[i]=((int)i1[i]-96);
        
        for (int i=0; i<i1_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else if (i2_count>i1_count) {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i1_count; i++) {
            
            int check=((int)i1[i]-96)-((int)i2[i]-96);
            if (check>0)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i1_count; i<i2_count; i++)
            s1[i]=((int)i2[i]-96);
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i2_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i2_count; i++) {
            int check=((int)i1[i]-96)-((int)i2[i]-96);
            if (check>0)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
}

void multiplication(char i1[], char i2[], char oper, int i1_count, int i2_count, int input_count) {

    if (i1_count>i2_count) {
        
        char s[i1_count];
        int s1[i1_count];
        
        for (int i=0; i<i2_count; i++) {
            
            int check=((int)i1[i]-96)*((int)i2[i]-96);
            if (check>0 && check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i2_count; i<i1_count; i++)
            s1[i]=((int)i1[i]-96);
        
        for (int i=0; i<i1_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else if (i2_count>i1_count) {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i1_count; i++) {
            
            int check=((int)i1[i]-96)*((int)i2[i]-96);
            if (check>0 && check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i1_count; i<i2_count; i++)
            s1[i]=((int)i2[i]-96);
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i2_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i2_count; i++) {
            int check=((int)i1[i]-96)*((int)i2[i]-96);
            if (check>0 && check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
}

void division (char i1[], char i2[], char oper, int i1_count, int i2_count, int input_count) {

    if (i1_count>i2_count) {
        
        char s[i1_count];
        int s1[i1_count];
        
        for (int i=0; i<i2_count; i++) {
            
            int check=((int)i1[i]-96)/((int)i2[i]-96);
            if (check>0 && check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i2_count; i<i1_count; i++)
            s1[i]=((int)i1[i]-96);
        
        for (int i=0; i<i1_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else if (i2_count>i1_count) {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i1_count; i++) {
            
            int check=((int)i1[i]-96)/((int)i2[i]-96);
            if (check>0 && check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=i1_count; i<i2_count; i++)
            s1[i]=((int)i2[i]-96);
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i2_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
    
    else {
        
        char s[i2_count];
        int s1[i2_count];
        
        for (int i=0; i<i2_count; i++) {
            int check=((int)i1[i]-96)/((int)i2[i]-96);
            if (check>0 && check<=26)
                s1[i]=check;
            else
                s1[i]=(int)i1[i]-128;
        }
        
        for (int i=0; i<i2_count; i++)
            s[i]=(char)(s1[i]+96);
        
        for (int i=i1_count; i<input_count; i++)
            s[i]='\0';
        
        printf("%s %c %s = %s\n", i1, oper, i2, s);
    }
}

int main(int argc, const char * argv[]) {
    
    printf("\nThis is a string arithmetic program. It performs operations (+, -, *, /) on strings.\nInstructions:\n1. Enter a string in the form of lower case letters (a-z), not more than 9 characters in length.\n2. Enter the operand (without any spaces) for the operation that you wish to perform. (+, -, *, /). Any other operand is not allowed.\n3. Enter another string similar to the first part (lower case letters (a-z), not more than 9 characters in length.) without any spaces.\n4. If you want to quit the program, simply enter 'quit' in lower case letters.\n\nSample input: abc+cde\n\n");
    
    int quit=0;
    
    while (quit==0) {
        
        char input[20];
        
        printf("\nEnter the string: ");
        scanf("%s", &input);
        
        if ((int)input[0]==113 && (int)input[1]==117 && (int)input[2]==105 && (int)input[3]==116) {
            
            quit=1;
            printf("\nExiting the program...\n\n");
            break;
        }
        
        int i=0, j=0, valid=0, input_count=0, oper_count=0, i1_count=0, i2_count=0;
        char i1[10],i2[10], oper='.';
        
        while (input[i]) {
            if ((int)input[i]==42 || (int)input[i]==43 || (int)input[i]==45 || (int)input[i]==47) {
                oper=input[i];
                oper_count++;
            }
            else if (((int)input[i]!=42 || (int)input[i]!=43 || (int)input[i]!=45 || (int)input[i]!=47) && oper=='.')
                i1[i]=input[i];
            else if (((int)input[i]!=42 || (int)input[i]!=43 || (int)input[i]!=45 || (int)input[i]!=47) && oper!='.') {
                i2[j]=input[i];
                j++;
            }
            if (input[i]==' ' || input[i]=='\t' || input[i]=='\r' || oper_count>1)
                valid=1;
            i++;
        }
        input_count=i;
        for (i=(input_count-j-1); i<10; i++)
            i1[i]='\0';
        
        for (i=j; i<10; i++)
            i2[i]='\0';
        
        while (i1[i1_count] && valid==0) {
            
            if ((int)i1[i1_count]>=97 && (int)i1[i1_count]<=122) {
                i1_count++;
            }
            else if (i1[i1_count]=='\0')
                break;
            else valid=1;
        }
        while (i2[i2_count] && valid==0) {
            
            if ((int)i2[i2_count]>=97 && (int)i2[i2_count]<=122) {
                i2_count++;
            }
            else if (i1[i1_count]=='\0')
                break;
            else valid=1;
        }
        if (i1_count==0 || i1_count>9 || oper=='.' || i2_count==0 || i2_count>9)
            valid=1;
        
        if (valid==0) {
            
            if (oper=='+')
                addition(i1, i2, oper, i1_count, i2_count, input_count);
            else if (oper=='-')
                subtraction(i1, i2, oper, i1_count, i2_count, input_count);
            else if (oper=='*')
                multiplication(i1, i2, oper, i1_count, i2_count, input_count);
            else
                division(i1, i2, oper, i1_count, i2_count, input_count);
        }
        else
            printf("\nWrong input!\n");
    }
    
    return 0;
}
