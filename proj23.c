/*  Date     : 3 August 2023
    Name     : Rushikesh G. Malave
    Objective: 23:Convert character from lowercase to uppercase  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;

    printf("Program to convert a lowercase letter to an uppercase letter:");
    printf("\n\nEnter any letter: ");
    scanf(" %c", &a);
    b=(int)a-32;
    printf("\nThe uppercase letter is: '%c'\n", b);
    return 0;
}
