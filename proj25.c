/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 25:Check if a person is eligible to vote or not  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Program to Check voting eligibility\n");
    printf("\nEnter your age: ");
    scanf("%d", &a);

    if (a>=18)
    {
        printf("\nEligible to vote.\n");
    }
    else
    {
        printf("\nIneligible to vote.\n");
    }
    return 0;
}
