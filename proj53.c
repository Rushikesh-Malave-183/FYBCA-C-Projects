/*  Date     : 2 October 2023
    Name     : Rushikesh G. Malave
    Objective: 53:Find the maximum number from an array of size 10  */

#include <stdio.h>

int main()
{
    int i,a[10];
    int max=0,min;
    for(i=0;i<10;i++)
    {
        printf("Enter element %d of your array: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nYour array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<=a[i])
            max=a[i];
        if(min>=a[i])
            min=a[i];
    }
    printf("\n\nMax element = %d\nMin element = %d\n", max,min);
    return 0;
}
