/*  Date     : 5 September 2023
    Name     : Rushikesh G. Malave
    Objective: 39:X 0 pattern 3x3  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program to print a 3x3 X O pattern\n");
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==j)
                printf("X\t");
            else
                printf("O\t");
        }
        printf("\n");
    }
}
