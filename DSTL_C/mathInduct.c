#include<stdio.h>
#include<math.h>

int main()
{
    int a=2,n,b,c,sum;
    sum=a;
    printf("Problem 1:\n\n");
    printf("\nWe have to Prove by Mathematical Induction The Following Proposition\n\n");
    printf("P(n) : 2 + 5 + 8 +......(3n-1) = n(3n-1)\n\n");

    printf("Base Step -\n\n");
    printf("For n = 1 LHS is : ");

    n=1;
    for (int i = 1; i < n; i++)
    {
        c=a+3;
        a=a+3;                   //For LHS
        sum=sum+c;
    }
    printf("%d",a);
    
    printf("\nFor n = 1 RHS is : ");
    b=n*(3*n+1)/2;                      //For RHS
    printf("%d",b);

    printf("\n\nIt is True for n = 1");
    printf("\n\nInductive Step -\n\n");

    printf("Let It be True for n=7\n\n");
    printf("Then For n = 8 LHS is : ");
    n=8;

    for (int i = 1; i < n; i++)
    {
        c=a+3;
        a=a+3;                        //For LHS
        sum=sum+c;   
    }
    printf("%d",sum);
    
    printf("\nFor n = 8 RHS is : ");
    b=n*(3*n+1)/2;                      //For RHS
    printf("%d",b);

    printf("\n\nTherefor By Mathematical Induction P(n) is True for all n > 0");


    sum=0;
    b=1;
    a=1;
    printf("\n\nProblem 2:\n\n");
    printf("\nWe have to Prove by Mathematical Induction The Following Proposition\n\n");
    printf("P(n) : 1^3 + 2^3 + 3^3 +......n^3 = (1 + 2 + 3 +....n)^2\n\n");

    printf("Base Step -\n\n");
    printf("For n = 1 LHS is : ");

    a=1;
    n=1;
    for (int i = 1; i <= n; i++)
    {
        a=pow(i,3);          //FOR LHS
        sum=sum+a;
    }
    printf("%d",a);
    
    printf("\nFor n = 1 RHS is : ");
    for (int i = 1; i < n; i++)
    {
        b=b+i+1;            //FOR RHS
    }
    b=pow(b,2);
    printf("%d",b);

    printf("\n\nIt is True for n = 1");
    printf("\n\nInductive Step -\n\n");

    printf("Let It be True for n=7\n\n");
    printf("Then For n = 8 LHS is : ");
    
    n=8;

    sum=0;
    for (int i = 1; i <= n; i++)
    {
        a=round(pow(i,3));          //for LHS
        sum=sum+a;
    }
    printf("%d",sum);
    b=1;
    printf("\nFor n = 8 RHS is : ");
     for (int i = 1; i < n; i++)
    {
        b=b + i+1;          // FOR RHS
    }
    b=round(pow(b,2));
    printf("%d",b);

    printf("\n\nTherefor By Mathematical Induction P(n) is True for all n > 0");

}