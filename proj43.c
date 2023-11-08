/*  Date     : 12 September 2023
    Name     : Rushikesh G. Malave
    Objective: 43:Function to check if the number is greater than 10  */

#include <stdio.h>

int check(int c)
{
    if(c>10)
        return 1;
    else
        return 0;
}
int main()
{
    int a,c;
    printf("Enter any number: ");
    scanf("%d",&a);

    c=check(a);
    if (c==1)
        printf("\nNumber is greater than 10.\n");
    else
    printf("\nNumber is not greater than 10.\n");
}
