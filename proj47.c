/*  Date     : 26 September 2023
    Name     : Rushikesh G. Malave
    Objective: 47:Program to swap two variables using functions (pass by reference)  */

#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("\nValues before swap: a=%d & b=%d", a,b);
    swap(&a,&b);
    printf("\nValues before swap: a=%d & b=%d\n", a,b);
    return 0;
}
