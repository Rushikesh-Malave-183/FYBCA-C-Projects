/*  Date     : 3 August 2023
    Name     : Rushikesh G. Malave
    Objective: 21:Find remainder of two integers  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Program to find the remainder of two numbers:");
    printf("\n\nEnter any dividend a: ");
    scanf("%d", &a);
    printf("Enter any divisor b: ");
    scanf("%d", &b);
    c=a % b;
    printf("\nThe remainder of the two given numbers (when a/b) is : %d\n", c);
    return 0;
}
