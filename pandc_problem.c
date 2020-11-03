#include <stdio.h>
#include<math.h>
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
int main()
{   int m, k, f;
    printf("\n\nProblem of Permutation : \n\n");
    printf("It is required to seat 5 men and 4 women in a row so that the women occupy the even places.\nHow many such arrangements are possible?\n\n");
    printf("We are given that there are 5 men and 4 women .i.e. there are 9 positions.\n\n");
    printf("The even positions are: 2nd, 4th, 6th and the 8th places");
    printf("These four places can be occupied by 4 women in P(4, 4) ways = 4!\n");
    m=fact(4);
    printf("= %d ways\n\n",m);
    printf("The remaining 5 positions can be occupied by 5 men in P(5, 5) = 5!\n");
    k=fact(5);
    printf("= %d ways\n\n",k);
    printf("Therefore, by the Fundamental Counting Principle\n\n");
    f=m*k;
    printf("Total number of ways of seating arrangements = %d x %d = %d ways\n\n",m,k,f); 
    
    printf("\n\nProblem of combination : \n\n");
    printf("How many ways are there to select 3 males and 2 females out of 7 males and 5 females?\n\n");
    printf("The number of ways to select 3 males out of 7 is\n");
    printf("7! / (3!*(7 -3)!)  :");
    m=fact(7)/(fact(3)*fact(7-3));
    printf("%d\n\n",m);
    printf("The number of ways to select 2 females out of 5 is\n");
    printf("5! / (2!*(5-2)!) :");
    k=fact(5)/(fact(2)*fact(5-2));
    printf("%d\n\n",k);

    f=m*k;

    printf("Hence, by the rule of product, the answer is : %d x %d = %d ways",m,k,f);

    return 0;
}