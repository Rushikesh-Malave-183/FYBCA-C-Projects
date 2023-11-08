/*  Date     : 11 July 2023
    Name     : Rushikesh G. Malave
    Objective: 12:Area of triangle  */

#include <stdio.h>

int main()
{
    float base,height,area;
    printf("Program to find the area of a triangle:");
    printf("\n\nEnter the base of your triangle in units: ");
    scanf("%f", &base);
    printf("Enter the height of your triangle in units: ");
    scanf("%f", &height);
    area=0.5*base*height;

    printf("\nThe area of the triangle is %0.3f square units.\n", area);

    return 0;
}
