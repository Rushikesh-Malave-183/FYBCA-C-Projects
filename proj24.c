/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 24:Print if the number is greater than 5  */

#include <stdio.h>

int main()
{
    int a;
    printf("Program to print an inputted number if it's greater than 5.");
    printf("\n\nEnter any integer number: ");
    scanf("%d", &a);
    if (a>5)
    {
        printf("\nThe given number is %d and is greater than 5.\n", a);
    }
    else
    {
        printf("\nThe number given is not greater than 5.\n");
    }

    return 0;
}
