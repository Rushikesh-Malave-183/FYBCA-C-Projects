/*  Date     : 12 September 2023
    Name     : Rushikesh G. Malave
    Objective: 46:Function to check the type of triangle  */

#include <stdio.h>

int check(int a,int b,int c)
{
    if(a==b&&b==c)
        return 1;
    else if(a==b||b==c||c==a)
        return 2;
    else
        return 3;
}
int main()
{
    int a,b,c,r;
    printf("Enter length of side 1 of your triangle: ");
    scanf("%d", &a);
    printf("Enter length of side 2 of your triangle: ");
    scanf("%d", &b);
    printf("Enter length of side 3 of your triangle: ");
    scanf("%d", &c);
    r=check(a,b,c);
    if(r==1)
        printf("\nThe triangle is an Equilateral triangle.\n");
    if(r==2)
        printf("\nThe triangle is an Isosceles triangle.\n");
    if(r==3)
        printf("\nThe triangle is an Scalene triangle.\n");
    return 0;
}
