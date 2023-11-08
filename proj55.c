/*  Date     : 6 October 2023
    Name     : Rushikesh G. Malave
    Objective: 55:2D Array to perform matrix addition and subtraction  */

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i,j;
    printf("Enter your first array:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%d = ",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter your second array:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%d = ",i,j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The output array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
