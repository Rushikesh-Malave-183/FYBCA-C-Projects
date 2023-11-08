/*  Date     : 5 September 2023
    Name     : Rushikesh G. Malave
    Objective: 41:Pyramid pattern 4 3 2 1  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=i)
            printf("X\t");
            else
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
