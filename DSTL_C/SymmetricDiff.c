#include<stdio.h>

void symdiff(int a[], int b[], int m, int n)
{
    int c[20],d[20],e[20],j=0,k=0,l=0,flag,temp;
    for (int i = 0; i < m; i++)
    {   flag=0;
        for (int j = 0; j < n; j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;                     //Set A-b
            }
        }
        if(flag==0)
        {
            c[k]=a[i];          //Copying A-b to C
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {   flag=0;
        for (int j = 0; j < m; j++)
        {
            if(b[i]==a[j])
            {
                flag=1;                 //Set B-A
                break;
            }
        }
        if(flag==0)
        {
            c[k]=b[i];              //copying B-A to c
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
    printf("\n Symmetric Difference of Set 1 and 2 is :\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t",c[i]);
    }  
}

int main()
{   int a[10], b[10], m, n;
    
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
    symdiff(a,b,m,n);
    return 0;
}