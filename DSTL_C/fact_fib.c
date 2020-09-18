#include<stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 1;

    else
    {
        return n*fact(n-1);
    }
}

int fib(int n)
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    
    else
    {
        return fib(n-1) + fib (n-2);
    }
    
}

int main()
{
    int n, m;

    printf("\nEnter The Number You Want to Calculate Factorial\n");
    scanf("%d",&n);

    printf("\nFactorial of %d is %d",n,fact(n));

    printf("\n\nEnter The Number of Terms You Want to Calculate Fibonacci Series\n");
    scanf("%d",&m);

    printf("\nFibonacci Seris Upto %d Terms is\n\n",m);

    for (int i = 0; i < m; i++)
    {
        printf("%d\t",fib(i));
    }
}