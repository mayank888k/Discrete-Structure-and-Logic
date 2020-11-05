#include <stdio.h> 
#include <string.h> 


void swap(char* x, char* y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void permute(char* a, int low, int r) 
{ 
	int i; 
	if (low == r) 
		printf("%s\n", a); 
	else { 
		for (i = low; i <= r; i++) { 
			swap((a + low), (a + i)); 
			permute(a, low + 1, r); 
			swap((a + low), (a + i));
		} 
	} 
} 

int main() 
{ 
	char str[10]; 
	int n;
	printf("Enter the string to get permutation\n");
	gets(str);
    printf("\n\nPermutation of the string %s is\n\n",str);
    n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
} 
