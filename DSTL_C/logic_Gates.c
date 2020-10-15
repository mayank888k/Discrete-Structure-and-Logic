#include<stdio.h>
#include<stdlib.h>

void andGate(int a[4],int b[4])
{
    int truthTable[4][3];
    char heading[6]={'A','B','A','&','&','B'};

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
        truthTable[i][2]=a[i]*b[i];
    }
    printf("\nTruth Table For And Gate\n\n");
    printf("%c\t%c\t%c%c%c%c\n\n",heading[0],heading[1],heading[2],heading[3],heading[4],heading[5]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",truthTable[i][j]);
        }
        printf("\n");
    } 
}

void orGate(int a[4],int b[4])
{
    int truthTable[4][3];
    char heading[6]={'A','B','A','|','|','B'};

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
        truthTable[i][2]=a[i]||b[i];
    }
    printf("\nTruth Table For OR Gate\n\n");
    printf("%c\t%c\t%c%c%c%c\n\n",heading[0],heading[1],heading[2],heading[3],heading[4],heading[5]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",truthTable[i][j]);
        }
        printf("\n");
    } 
}

void notGate(int a[4])
{
    int truthTable[4][2];
    char heading[3]={'A','!','A'};

    for (int i = 0; i < 4; i++)
    {
        truthTable[i][0]=a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        truthTable[i][1]=!a[i];
    }
    printf("\nTruth Table For NOT Gate\n\n");
    printf("%c\t%c%c\n\n",heading[0],heading[1],heading[2]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
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
    andGate(a,b);
    orGate(a,b);
    notGate(a);
    return 0;
}
