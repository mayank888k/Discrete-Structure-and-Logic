#include<stdio.h>
#include<stdlib.h>

void inter(int a[10], int b[10], int m, int n)
{
    int c[20],k=0,temp,flag;

    for (int i = 0; i < n; i++)
    {   flag=0;
        for (int j = 0; j < m; j++)
        {
            
            if (b[i]==a[j])
            {
                flag=1;                 // checking if b is in c or not if not means flag=0
                break;
            }    
        }
        if (flag==1)
        {
            c[k]=b[i];
            k++;
        }  
    }
    for (int i = 0; i < k-1; i++)
    {
        for (int j = 0; j < k-i-1; j++)
        {
            if (c[j]>c[j+1])
            {
                temp=c[j];                  //bubblesort
                c[j]=c[j+1];
                c[j+1]=temp;
            } 
        }
    }
    printf("\nIntersection of Set 1 and 2 is :\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t",c[i]);
    }
}

int main()
{
    int a[10],b[10],m,n,ch=0;
    printf("Enter the size of set 1:\n");
    scanf("%d",&m);
    printf("Enter the elements of set 1:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set 2:\n");
    scanf("%d",&n);
    printf("Enter the elements of set 2:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n Set 1 is :\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nSet 2 is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",b[i]);
    }

    inter(a,b,m,n);
    
    return 0;
}