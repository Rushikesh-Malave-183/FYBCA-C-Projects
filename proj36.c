/*  Date     : 15 August 2023
    Name     : Rushikesh G. Malave
    Objective: 36:Print even numbers 1 to 50, 5 on each line  */

#include <stdio.h>

int main()
{
    int i,j=0;
    for (int i=1; i<=50; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\t", i);
            j++;
        }
        if (j%5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
