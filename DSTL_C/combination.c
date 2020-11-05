#include<stdio.h> 

void combination(int arr[], int n, int r, int index, int data[], int i) 
{
    if (index == r) 
    { 
        for (int j=0; j<r; j++) 
            printf("%d ",data[j]); 
        printf("\n"); 
        return; 
    } 

    if (i >= n) 
        return; 

    data[index] = arr[i]; 
    combination(arr, n, r, index+1, data, i+1); 
    combination(arr, n, r, index, data, i+1); 
} 

void printCombination(int arr[], int n, int r) 
{ 
    int data[r]; 
    combination(arr, n, r, 0, data, 0); 
} 

int main() 
{ 
    int arr[10]; 
    int r;
    int n;
    printf("\nEnter number of elements in the set :");
    scanf("%d",&n);
    printf("\nEnter the elements of the set :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter r :");
    scanf("%d",&r);
    printf("\nCombination of selecting %d elements from the above set are\n\n",r);
    printCombination(arr, n, r); 
    return 0; 
} 