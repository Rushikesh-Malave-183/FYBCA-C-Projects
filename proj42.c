/*  Date     : 5 September 2023
    Name     : Rushikesh G. Malave
    Objective: 42:Menu driven simple calculator*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float a,b,result;
    printf("Menu driven simple calculator.\n");
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");


    while (1)
    {
        printf("\nChoose an option(1,2,3,4,5): ");
        scanf("%d", &choice);

        if (choice<1 || choice>5)
        {   printf("\nInvalid choice.\n");
            continue;   }

        else if (choice == 5)
        {   printf("\nExiting Calculator, Good Bye.\n");
            break;  }

        printf("\nEnter number a: ");
        scanf("%f", &a);
        printf("Enter number b: ");
        scanf("%f", &b);

        switch (choice)
        {
        case 1:
            result = a+b;
            printf("%.2f  +  %.2f  =  ",a,b);
            break;
        case 2:
            result = a-b;
            printf("%.2f  -  %.2f  =  ",a,b);
            break;
        case 3:
            result = a*b;
            printf("%.2f  *  %.2f  =  ",a,b);
            break;
        case 4:
            if (b==0)
            {   printf("\nDivision with a zero is invalid\n");
                continue;   }
            result = a/b;
            printf("%.2f  /  %.2f  =  ",a,b);
            break;
        }
        printf("%.3f\n", result);
    }
    return 0;
}
