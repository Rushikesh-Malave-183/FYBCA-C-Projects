/*  Date     : 26 September 2023
    Name     : Rushikesh G. Malave
    Objective: 49:Recursive function to calculate the sum of a range of numbers  */

#include <stdio.h>

int calc(int a)
{
    if (a==1)
    {
        return 1;
    }
    else
    {
        return a+calc(a-1);
    }
}

int main()
{
    int a, sum;
    printf("Program to find the sum of a range using recursion\n");
    printf("\nEnter any integer: ");
    scanf("%d", &a);
    sum = calc(a);
    printf("%d\n", sum);
    return 0;
}
