/*  Date     : 2 October 2023
    Name     : Rushikesh G. Malave
    Objective: 50:Program to demonstrate math functions  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Square root = %.2f\n",sqrt(x));
    printf("Value = %f\n",pow(x,5));
    printf("log = %f\n",log(x));
    printf("rounding up floor= %f\n",floor(9.25));
    printf("rounding up ceiling=%f\n",ceil(9.25));
    printf("rounding up =%f\n",round(9.25));
    printf("Sin(0)= %f\n",sin(0));
    printf("cos(0)= %f\n",cos(0));
    return 0;
}
