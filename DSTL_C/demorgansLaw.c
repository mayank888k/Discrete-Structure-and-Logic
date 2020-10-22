#include<stdio.h>
#include<stdlib.h>

void main()
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