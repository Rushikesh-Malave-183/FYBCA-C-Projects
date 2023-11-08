/*  Date     : 3 August 2023
    Name     : Rushikesh G. Malave
    Objective: 19:Average of three integers  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    printf("Program to find the average of three numbers:");
    printf("\n\nEnter any number a: ");
    scanf("%f", &a);
    printf("Enter any number b: ");
    scanf("%f", &b);
    printf("Enter any number c: ");
    scanf("%f", &c);
    d=(a+b+c)/3;
    printf("\nThe average of the three given numbers is %0.3f\n", d);

    return 0;
}
