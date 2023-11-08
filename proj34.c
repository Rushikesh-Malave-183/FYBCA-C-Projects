/*  Date     : 15 August 2023
    Name     : Rushikesh G. Malave
    Objective: 34:Print all odd numbers from 1 to 50 using a for loop  */

#include <stdio.h>

int main()
{
    for (int i=1; i<=50; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
