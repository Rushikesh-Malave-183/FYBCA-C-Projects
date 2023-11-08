/*  Date     : 7 August 2023
    Name     : Rushikesh G. Malave
    Objective: 31:Grade of a student based on input of three subjects  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sci, math, chem, p;
    printf("Program to find the percentage of a student\n\n");
    printf("Input the marks obtained off 100 in Science: ");
    scanf("%f", &sci);
    printf("Input the marks obtained off 100 in Math: ");
    scanf("%f", &math);
    printf("Input the marks obtained off 100 in Chemistry: ");
    scanf("%f", &chem);

    p = (sci+math+chem)/3;

    if (p>=75)
        printf("\nYour percentage is %0.2f%, Distinction\n", p);
    else if ((p<75)&&(p>=60))
        printf("\nYour percentage is %0.2f%, First Class\n", p);
    else if ((p<60)&&(p>=45))
        printf("\nYour percentage is %0.2f%, Second Class\n", p);
    else if ((p<45)&&(p>=35))
        printf("\nYour percentage is %0.2f%, Third Class\n", p);
    else
        printf("\nYour percentage is %0.2f%, Needs improvement\n", p);

    return 0;
}
