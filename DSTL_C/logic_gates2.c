#include<stdio.h>
#include<stdlib.h>

void nandGate(int a[4],int b[4])
{
    int truthTable[4][3];
    char heading[12]={'A','B','A',' ','N','A','N','D',' ','B'};
    char head2[8]={'A',' ','N','A','N','D',' ','B'};

    for (int i = 0; i < 4; i++)
    {
        truthTable[i][0]=a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][1]=b[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][2]=!(a[i]&b[i]);
    }
    printf("\nTruth Table For Nand Gate\n\n");
    printf("%c\t%c\t%c%c%c%c%c%c%c%c\n\n",heading[0],heading[1],heading[2],heading[3],heading[4],heading[5],heading[6],heading[7],heading[8],heading[9],heading[10],heading[11]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",truthTable[i][j]);
        }
        printf("\n");
    } 
}

void norGate(int a[4],int b[4])
{
    int truthTable[4][3];
    char heading[9]={'A','B','A',' ','N','O','R',' ','B'};

    for (int i = 0; i < 4; i++)
    {
        truthTable[i][0]=a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][1]=b[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][2]=!(a[i]||b[i]);
    }
    printf("\nTruth Table For NOR Gate\n\n");
    printf("%c\t%c\t%c%c%c%c%c%c%c\n\n",heading[0],heading[1],heading[2],heading[3],heading[4],heading[5],heading[6],heading[7],heading[8]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",truthTable[i][j]);
        }
        printf("\n");
    } 
}

void xorGate(int a[4], int b[4])
{
    int truthTable[4][3];
    char heading[9]={'A','B','A',' ','X','O','R',' ','B'};

    for (int i = 0; i < 4; i++)
    {
        truthTable[i][0]=a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][1]=b[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][2]=a[i]^b[i];
    }
    printf("\nTruth Table For XOR Gate\n\n");
    printf("%c\t%c\t%c%c%c%c%c%c%c\n\n",heading[0],heading[1],heading[2],heading[3],heading[4],heading[5],heading[6],heading[7],heading[8]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",truthTable[i][j]);
        }
        printf("\n");
    } 
}
int main()
{ 
    int a[4]={0,0,1,1};
    int b[4]={0,1,0,1};
    nandGate(a,b);
    norGate(a,b);
    xorGate(a,b);
    return 0;
}
