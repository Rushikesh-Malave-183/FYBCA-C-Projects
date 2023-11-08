/*  Date     : 3 August 2023
    Name     : Rushikesh G. Malave
    Objective: 18:Addition of two float numbers  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("\nProgram to find the sum of two floats:");
    printf("\n\nInput any float(decimal) number a: ");
    scanf("%f", &a);
    printf("Input any float(decimal) number b: ");
    scanf("%f", &b);
    c=a+b;
    printf("\nThe sum of the two given numbers is %0.3f.\n", c);
    return 0;
}
