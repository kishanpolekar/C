//
//  main.c
//  struct_student_rec
//
//  Created by Kishan on 5/26/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>

int main() {
    struct student {
        char name[30],add[50];
        int roll_no,ph_no,age;
    }s;
    printf("Enter the student details: ");
    printf("\nROLL NUMBER: ");
    scanf("%d",&s.roll_no);
    printf("NAME: ");
    scanf("\n%[^\n]s",s.name);
    printf("ADDRESS: ");
    scanf("\n%[^\n]s",s.add);
    printf("AGE: ");
    scanf("%d",&s.age);
    printf("CONTACT NUMBER: ");
    scanf("%d",&s.ph_no);
    printf("\nR.NO. : %d\nNAME : %s\nADDRESS : %s\nAGE : %d\nCONTACT : %d\n",s.roll_no,s.name,s.add,s.age,s.ph_no);
    return 0;
}
