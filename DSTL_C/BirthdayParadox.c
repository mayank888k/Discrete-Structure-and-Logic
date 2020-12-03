#include<stdio.h>
#include<stdlib.h>

int main()
{
    double n;
    double p, p1=1.0, p2, temp=365, temp2=365, temp3=1;
    printf("Birthday Problem using 1st Way :\n\n");
    printf("Enter the Number of Students in the class :");
    scanf("%lf",&n);

    while(n>0)
    {
        p2=temp/temp2;
        p1=p1*p2;
        temp=temp-1;
        n=n-1;
    }

    p=1-p1;
    printf("Probability is : %lf\n\n", p);
    return 0;
    
}