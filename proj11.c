/*  Date     : 11 July 2023
    Name     : Rushikesh G. Malave
    Objective: 11:Area of circle - Use of constants */

#include <stdio.h>

int main()
{
    float r,a;
    printf("Program to find the Area of a circle\n");
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &r);
    a=3.14*r*r;
    printf("\nThe area of the circle is: %.3f square units.\n", a);
    return 0;
}
