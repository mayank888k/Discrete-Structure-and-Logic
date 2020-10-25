#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int k,n,fav,temp,search, index;
    scanf("%d%d%d",&n,&k,&fav);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < k; i++)
    {   
        temp=arr[0];

        for (int j = 0; j < n-1 ; j++)
        {
            arr[j]=arr[(j+1)%n];
        }
        arr[n-1]=temp;
    }

    search = fav;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==search)
        {   
            index = i+1;
            break;
        }
        
    }
    
    printf("%d",index);
    
    return 0;
}