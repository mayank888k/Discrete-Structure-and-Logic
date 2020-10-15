#include<stdio.h>
#include<stdlib.h>

void towerOfHanaoi(int n, char from, char to, char aux)
{
    if (n==1)
    {
        printf("Move Disc From Peg %c to Peg %c\n",from,to);
        return;
    }
    towerOfHanaoi(n-1, from, aux, to);
    printf("Move Disc From Peg %c to Peg %c\n",from,to);
    towerOfHanaoi(n-1,aux,to,from);
}

int main()
{
    int n;
    printf("\nEnter the number of Disc in Peg A\n");
    scanf("%d",&n);
    printf("\n");
    towerOfHanaoi(n,'A','C','B');
}