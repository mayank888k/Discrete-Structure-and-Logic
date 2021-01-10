#include <stdio.h>
#include <stdlib.h>

void mult(int a[10][10], int b[10][10], int m, int n, int p, int q)
{
    int c[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    printf("\nMultiplication of Matrix 1 and 2 is:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10], m, n, p, q, ch;

    printf("Enter the rows and column of 1st Matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the rows and column of 2nd Matrix\n");
    scanf("%d%d", &p, &q);

    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nMatrix 1 is\n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2 is\n\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    mult(a,b,m,n,p,q);
    return 0;
}