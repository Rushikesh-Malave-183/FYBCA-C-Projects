/*  Date     : 3 August 2023
    Name     : Rushikesh G. Malave
    Objective: 20:Volume of a sphere  */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359

int main()
{
    float v,r;
    printf("\nProgram to find the volume of a sphere:");
    printf("\n\nEnter the radius of the sphere: ");
    scanf("%f", &r);
    v=((float)4/3)*pi*(r*r*r);
    printf("\nThe volume of the given sphere is %0.3f\n", v);
    return 0;
}
