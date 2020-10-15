#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int a[2][5]={{1,2,3,4,5},{3,2,1,4,5}};
    int b[2][5]={{1,2,3,4,5},{1,4,3,5,2}};
    int c[2][5]={{1,2,3,4,5},{1,3,2,4,5}};
    
    printf("\nSet A = {1, 2, 3, 4, 5}\n\n");

    printf("Permutation Composition is - (1,3)o(2,4,5)o(2,3)\n\n");
    printf("After Solving it Right to Left Permutation Composition is (1,3)o(2,3,4,5) \n\n");

    for (int i = 0; i < 5; i++)
    {
        c[1][i]=b[1][c[1][i]-1];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    printf("\nAfter Solving it Right to Left Again Final Composition is (1,3,4,5,2)\n\n");
    
    for (int i = 0; i < 5; i++)
    {
        c[1][i]=a[1][c[1][i]-1];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}