/*  Date     : 7 July 2023
    Name     : Rushikesh G. Malave
    Objective: 10:Arithmetic operations - Use of variables  */

#include <stdio.h>

int main()
{
    int a,b;
    float j,k;

    printf("Addition & Subtraction:\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nSum of the given numbers: %d\n", a+b);
    printf("Difference of the given numbers: %d\n", a-b);

    printf("\nMultiplication & Division:\n");
    printf("Enter first number: ");
    scanf("%f", &j);
    printf("Enter second number: ");
    scanf("%f", &k);
    printf("\nProduct of numbers: %.3f\n", j*k);
    printf("Quotient of numbers: %.3f\n", j/k);

    return 0;
}
