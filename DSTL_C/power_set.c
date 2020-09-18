#include<stdio.h>
#include<math.h>
int main()
{   int a[10], m, n, count;
    printf("Enter the size of set\n");
    scanf("%d",&m);

    n=pow(2,m);     //power set size

    printf("\nEnter the Elements of set\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nSet is :\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nPower Set is :\n");
    for (count=0; count < n ; count++)
    {
        for (int j = 0; j < m; j++)
        {
            if (count & (1<<j))      //here i generate program counter using bitwise AND operator
            {                        // and performing Left Shift on 001
                printf("%d", a[j]);
            }    
        }
        printf("\n");
    }
    return 0;
}