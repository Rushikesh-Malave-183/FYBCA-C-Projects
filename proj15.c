/*  Date     : 27 July 2023
    Name     : Rushikesh G. Malave
    Objective: 15:Swap two numbers using a function  */

#include <stdio.h>
#include <stdlib.h>

float a,b,c;

void swap()
{   c=a;
    a=b;
    b=c;    }

int main()
{   printf("Program to swap the numbers of two variables:\n");
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of B: ");
    scanf("%f", &b);

    printf("\nValues of a & b before swap are %.2f & %.2f resp.", a, b);
    swap();
    printf("\nValues of a & b after swap are %.2f & %.2f resp.\n", a, b);
    return 0;   }
