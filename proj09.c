/*  Date     : 7 July 2023
    Name     : Rushikesh G. Malave
    Objective: 9:Demonstrate different data types  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char c;
    char name[32];

    printf("\nEnter any integer number: ");
    scanf("%d", &a);
    printf("Enter any decimal number: ");
    scanf("%f", &b);
    printf("Enter any english character: ");
    scanf(" %c", &c);
    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nYou are %s!\n", name);
    printf("\nInputs entered: \nInteger = %d\nDecimal = %0.03f\nCharacter = %c\n", a,b,c);

    return 0;
}
