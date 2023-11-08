/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 30:Check eligibility of a person for a scheme (nested if)  */

#include <stdio.h>

int main()
{
    char g;
    int a;
    printf("Program to Check the eligibility for a scheme.");
    printf("\n\nInput your gender (m/f): ");
    scanf(" %c", &g);
    printf("\nInput your age: ");
    scanf("%d", &a);

    if ((g=='f')||(g=='F'))
    {
        if (a>=18)
        {printf("\nYou are eligible for the scheme.\n");}
        else
        {printf("\nYou are ineligible for the scheme (reason: age).\n");}
    }
    else
    {
        printf("\nIneligible for the scheme (reason: gender).\n");
    }

    return 0;
}
