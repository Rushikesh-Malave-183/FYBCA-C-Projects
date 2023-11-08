/*  Date     : 27 July 2023
    Name     : Rushikesh G. Malave
    Objective: 14:Swap two numbers  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Program to swap the numbers of two variables:\n");
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("\nValues of a & b before swap are %d & %d resp.", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nValues of a & b after swap are %d & %d resp.\n", a, b);

    return 0;
}
