/*  Date     : 6 October 2023
    Name     : Rushikesh G. Malave
    Objective: 54:Take input of numbers and print the same from a 2D Array  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j;
    printf("Enter your array:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter %d,%d element of your array: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Your array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
