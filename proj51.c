/*  Date     : 2 October 2023
    Name     : Rushikesh G. Malave
    Objective: 51:Take input of numbers and print the numbers from a 1D array of size 10  */

#include <stdio.h>

int main()
{
    int i,a[10];
    for (i=1;i<=10;i++)
    {
        printf("Enter element %d of your array: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nYour array is: \n");
    for (i=1;i<=10;i++)
    {
        printf("%d\t", a[i]);
        if (i==10)
            printf("\n");
    }
    return 0;
}
