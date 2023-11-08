/*  Date     : 22 August 2023
    Name     : Rushikesh G. Malave
    Objective: 37:Factorial  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;
    long long int fac = 1;
    printf("Program to find the factorial of a user-input number\n");
    printf("\nEnter any positive number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nFactorial is not defined for negative numbers.\n");
        return 1;
    }
    else
    {
        for(i=1; i<=num; i++)
        {
            fac = fac*i;
        }
    }
    printf("\nThe factorial of the given number is %lli.\n", fac);
    return 0;
}
