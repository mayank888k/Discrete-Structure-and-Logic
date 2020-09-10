#include <stdio.h>

int main()
{
    int a[10], b[10], m, n;
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
    printf("\n\nCartesian Product of A X B is:\n");
    printf("\n{");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==m-1 && j==n-1)  // to not print comma with last element
            {
                printf("(%d,%d)",a[i],b[j]);
            }
            else
            {
                printf("(%d,%d),",a[i],b[j]);
            }  
        }   
    }
    printf("}\n");
    return 0;   
}
