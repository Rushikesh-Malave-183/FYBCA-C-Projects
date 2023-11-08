/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 27:Check if the character entered is M or F  */

#include <stdio.h>

int main()
{
    char a;
    printf("Program to Print the gender of a person.\n\n");
    printf("Input your gender (m/f): ");
    scanf(" %c", &a);

    if ((a == 'm') || (a == 'M'))
    {
        printf("\nYou are Male.\n");
    }
    else if ((a == 'f') || (a == 'F'))
    {
        printf("\nYou are Female.\n");
    }
    else
    {
        printf("\nInvalid input. Please enter m or f.\n");
    }
    return 0;
}
