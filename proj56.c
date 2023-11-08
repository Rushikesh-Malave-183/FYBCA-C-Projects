/*  Date     : 6 October 2023
    Name     : Rushikesh G. Malave
    Objective: 56:1D Array to demonstrate string manipulation functions  */

#include <stdio.h>
#include<string.h>

int main()
{
    char a[50], b[50], c[50];
    int flag;
    printf("Enter string A: ");
    gets(a);
    printf("Enter string B: ");
    gets(b);
    printf("String A : %s\n",a);
    printf("String B : %s\n",b );
    printf("Size of string A = %d\n",strlen(a));
    strcpy(c, a);
    printf("String C after string copy: %s\n",c);
    if(strcmp(a,b)==0)
    {
        printf("Strings match\n");
    }
    else
    {
        printf("Strings do not match\n");
    }
    strcat(a,b);
    printf("String a after string concatenate: %s\n",a);
    return 0;
}
