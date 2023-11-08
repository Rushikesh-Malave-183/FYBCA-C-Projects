/*  Date     : 22 August 2023
    Name     : Rushikesh G. Malave
    Objective: 39:Check if the number is prime or not  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, isPrime = 1;
    printf("Program to check if a number is prime or not\n\n");
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 1)
        isPrime = 0;
    else if (num == 2)
        isPrime = 1;
    else
    {
        for (i = 2; i*i <= num; i++)
        {
            if (num%i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("\nThe given number is Prime.\n");
    else
        printf("\nThe given number is not Prime.\n");

    return 0;
}

