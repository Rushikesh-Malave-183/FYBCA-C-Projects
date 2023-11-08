/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 28:Greatest of two numbers  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Program to Find the greatest of two numbers.\n\n");
    printf("Enter any number a: ");
    scanf("%f", &a);
    printf("\nEnter any number b: ");
    scanf("%f", &b);

    if (a>b)
    {
        printf("\nA is greater than B.\n");
    }
    else if (a<b)
    {
        printf("\nB is greater than A.\n");
    }
    else
    {
        printf("\nInvalid/Equal inputs.\n");
    }
    return 0;
}
