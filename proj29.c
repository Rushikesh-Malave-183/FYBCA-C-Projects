/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 29:Greatest of three numbers  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Program to Find the greatest of three numbers.\n\n");
    printf("Enter any number a: ");
    scanf("%f", &a);
    printf("\nEnter any number b: ");
    scanf("%f", &b);
    printf("\nEnter any number c: ");
    scanf("%f", &c);

    if ((a>b)&&(a>c))
    {
        printf("\nA is the greatest.\n");
    }
    else if ((b>a)&&(b>c))
    {
        printf("\nB is the greatest.\n");
    }
    else if ((c>a)&&(c>b))
    {
        printf("\nC is the greatest.\n");
    }
    else
    {
        printf("\nInvalid/Equal inputs.\n");
    }
    return 0;
}
