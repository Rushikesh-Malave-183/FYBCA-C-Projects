/*  Date     : 12 September 2023
    Name     : Rushikesh G. Malave
    Objective: 44:Function to print the multiplication table of a number  */

#include <stdio.h>

void printTable(int num)
{
    int i;
    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num,i,i*num);
    }
}
int main()
{
    int num;
    printf("Program to print the table of a number:");
    printf("Enter the required table's number: ");
    scanf("%d", &num);
    printTable(num);
    return 0;
}
