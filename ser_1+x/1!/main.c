//
//  main.c
//  ser_1+x/1!
//
//  Created by Kishan on 5/24/16.
//  Copyright © 2016 Kishan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    float sum=1,x;int n,i;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);
    printf("\nEnter the value of 'x': ");
    scanf("%f",&x);
    for (i=1; i<n; i++)
        sum+=pow(x,i)/i;
    printf("\nThe sum of the series is: %f\n",sum);
    return 0;
}
