/*  Date     : 22 August 2023
    Name     : Rushikesh G. Malave
    Objective: 38:Fibonacci  */

int main()
{
    int a,b,c,n,i;
    printf("Enter the first number of your series: ");
    scanf("%d", &a);
    printf("Enter the second number of your series: ");
    scanf("%d", &b);
    printf("Enter the required number of digits in your series: ");
    scanf("%d", &n);

    if (n%2 != 0)
    {n = n+1;}
    n = n/2;

    printf("The Fibonacci sequence is:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t%d\t", a,b);
        a=a+b;
        b=a+b;
    }
}
