/*  Date     : 2 October 2023
    Name     : Rushikesh G. Malave
    Objective: 52:Find the sum and average of ten numbers from a 1D array of size 10  */

#include <stdio.h>

int main()
{
    int i,a[10],sum=0,avg;
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
    for (i=1;i<=10;i++)
    {
        sum = sum + a[i];
    }
    avg = sum/10;
    printf("The sum of your array is %d\n", sum);
    printf("The average of your array is %d\n", avg);
    return 0;
}
