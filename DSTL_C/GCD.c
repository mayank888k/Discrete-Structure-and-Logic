#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int n, m, gcd1;
    printf("\nEnter Two Numbers\n");
    scanf("%d%d",&n,&m);

    gcd1=gcd(n,m);

    printf("GCD of %d and %d is %d",n,m,gcd1);

    return 0;
}