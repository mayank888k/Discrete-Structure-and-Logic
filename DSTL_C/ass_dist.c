#include <stdio.h>
#include <stdlib.h>
void demorgansLaw()
{
    int a[4]={0,0,1,1}, b[4]={0,1,0,1}, truthtable[4][4];
    
    for (int i = 0; i < 4; i++)
    {
        truthtable[i][0]=a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthtable[i][1]=b[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthtable[i][2]=!(a[i]||b[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        truthtable[i][3]=(!a[i])&&(!b[i]);
    }

    printf("\nVerification of Demorgans Law For OR\n\n");
    printf("A\tB\t(A OR B)'\tA' AND B'\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j==3)
            {
                printf("\t%d\t\t",truthtable[i][j]);
            }
            else
            {
                printf("%d\t",truthtable[i][j]);
            }
        }
        printf("\n");
    }
}
void associativeLawForOr()
{
    int a[8] = {0, 0, 0, 0, 1, 1, 1, 1}, b[8] = {0, 0, 1, 1, 0, 0, 1, 1}, c[8] = {0, 1, 0, 1, 0, 1, 0, 1}, truthtable[8][5];

    for (int i = 0; i < 8; i++)
    {
        truthtable[i][0] = a[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][1] = b[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][2] = c[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][3] = a[i] || (b[i] || c[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][4] = (a[i] || b[i]) || c[i];
    }

    printf("\nVerification of Associative Law For OR\n\n");
    printf("A\tB\tC\tA + (B + C)\t(A + B) + C\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 3)
            {
                printf("\t%d\t\t", truthtable[i][j]);
            }
            else
            {
                printf("%d\t", truthtable[i][j]);
            }
        }
        printf("\n");
    }
}

void associativeLawForAnd()
{
    int a[8] = {0, 0, 0, 0, 1, 1, 1, 1}, b[8] = {0, 0, 1, 1, 0, 0, 1, 1}, c[8] = {0, 1, 0, 1, 0, 1, 0, 1}, truthtable[8][5];

    for (int i = 0; i < 8; i++)
    {
        truthtable[i][0] = a[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][1] = b[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][2] = c[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][3] = a[i] && (b[i] && c[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][4] = (a[i] && b[i]) && c[i];
    }

    printf("\nVerification of Associative Law For AND\n\n");
    printf("A\tB\tC\tA.(B.C) \t    (A.B).C\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 3)
            {
                printf("\t%d\t\t", truthtable[i][j]);
            }
            else
            {
                printf("%d\t", truthtable[i][j]);
            }
        }
        printf("\n");
    }
}

void distributiveLawforOr()
{
    int a[8] = {0, 0, 0, 0, 1, 1, 1, 1}, b[8] = {0, 0, 1, 1, 0, 0, 1, 1}, c[8] = {0, 1, 0, 1, 0, 1, 0, 1}, truthtable[8][5];

    for (int i = 0; i < 8; i++)
    {
        truthtable[i][0] = a[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][1] = b[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][2] = c[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][3] = a[i] && (b[i] || c[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][4] = (a[i] && b[i]) || (a[i] && c[i]) ;
    }

    printf("\nVerification of Distributive Law For OR\n\n");
    printf("A\tB\tC\tA.(B + C)\t   A.B + A.C\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 3)
            {
                printf("\t%d\t\t", truthtable[i][j]);
            }
            else
            {
                printf("%d\t", truthtable[i][j]);
            }
        }
        printf("\n");
    }
}

void distributiveLawForAnd()
{
    int a[8] = {0, 0, 0, 0, 1, 1, 1, 1}, b[8] = {0, 0, 1, 1, 0, 0, 1, 1}, c[8] = {0, 1, 0, 1, 0, 1, 0, 1}, truthtable[8][5];

    for (int i = 0; i < 8; i++)
    {
        truthtable[i][0] = a[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][1] = b[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][2] = c[i];
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][3] = a[i] || (b[i] && c[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        truthtable[i][4] = (a[i] || b[i]) && (a[i] || c[i]);
    }

    printf("\nVerification of Distributive Law For AND\n\n");
    printf("A\tB\tC\tA + (B.C)\t(A + B).(A + C)\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 3)
            {
                printf("\t%d\t\t", truthtable[i][j]);
            }
            else
            {
                printf("%d\t", truthtable[i][j]);
            }
        }
        printf("\n");
    }
}
void main()
{
    associativeLawForOr();
    associativeLawForAnd();
    distributiveLawforOr();
    distributiveLawForAnd();
    demorgansLaw();
}