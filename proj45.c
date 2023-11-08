/*  Date     : 12 September 2023
    Name     : Rushikesh G. Malave
    Objective: 45:Function to find the square and cube of a number  */

#include <stdio.h>

void cube(int num)
{
    printf("\nThe cube of the number is %d.\n", num*num*num);
}
int square(int num)
{
    int square = num * num;
    return square;
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("\nThe square of the number is %d", square(num));
    cube(num);
    return 0;
}
