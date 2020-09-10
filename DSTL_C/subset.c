#include <stdio.h>

int sub(int a[], int b[],int m,int n)
{
    for (int i = 0; i < m; i++)
    {  
        for (int j = 0; j < n; j++)
        {
            if (a[i]==b[j])
            {   
                break;
            }
            if (j==n)
            {
                return 0;
            }
        }
    return 1;
    }
}
int main()
{
    int a[10], b[10], m, n, result;
    printf("\nEnter the size of Set A\n");
    scanf("%d",&m);
    printf("Enter the elements of Set A\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the size of Set B\n");
    scanf("%d",&n);
    printf("Enter the elements of Set B\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\n Set A is :\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nSet B is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",b[i]);
    }
    
    result=sub(a,b,m,n);
    if (result==0)
    {
        printf("\n\nA is not a subset of B");
    }
    else
    {
        printf("\n\nA is a subset of B");
    }
    if ((m==n) && (result==1))
    {
        printf("\n\nA is a Proper subset Of B");
    } 
    return 0;
}