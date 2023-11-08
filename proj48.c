/*  Date     : 26 September 2023
    Name     : Rushikesh G. Malave
    Objective: 48:Program to find the area of a triangle using functions (pass by reference)  */

#include <stdio.h>

void calc(float *b, float *h, float *area)
{
    *area = (float)0.5*(*b)*(*h);
}
int main()
{
    float b,h,area;
    printf("Enter the base of your triangle: ");
    scanf("%f", &b);
    printf("Enter the height of your triangle: ");
    scanf("%f", &h);
    calc(&b, &h, &area);
    printf("\nThe area of your triangle is %.3f\n",area);
    return 0;
}
