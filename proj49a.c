/*  Date     : 26 September 2023
    Name     : Rushikesh G. Malave
    Objective: 49:Recursive function to calculate the factorial of a number  */

#include <stdio.h>

int fact(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

int main()
{
    int n, factorial = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}

