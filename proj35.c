/*  Date     : 15 August 2023
    Name     : Rushikesh G. Malave
    Objective: 35:Print numbers 1 to 50, 5 on each line  */

#include <stdio.h>

int main()
{
    for (int i=1; i<=50; i++)
    {
        printf("%d\t", i);
        if (i%5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}

