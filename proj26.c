/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 26:Check if the number is odd or even  */

#include <stdio.h>

int main()
{
    int a;
    printf("Program to Find if a number is odd or even.\n");
    printf("\nEnter any integer: ");
    scanf("%d", &a);

    if ((a%2)==0)
    {
        printf("\nThe given number is Even.\n");
    }
    else
    {
        printf("\nThe given number is Odd.\n");
    }
    return 0;
}
