/*  Date     : 27 July 2023
    Name     : Rushikesh G. Malave
    Objective: 13:Area of triangle using function  */

#include <stdio.h>
#include <stdlib.h>

float findArea(float b, float h)
{
    float a;
    a=0.5*b*h;
    return a;
}

int main()
{
    float area,b,h;

    printf("Program to find the Area of a triangle.\n");
    printf("\nEnter the base of the triangle: ");
    scanf("%f", &b);
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    area=findArea(b,h);
    printf("\nThe area of the triangle is %0.3f square units.\n", area);
    return 0;
}
