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
	char str[]="ABCDE"; 
	int n;
    printf("\n\nA license plate begins with four letters. If the possible letters are A, B, C, D and E, how many different permutations of these letters can be made if no letter is used more than once?\n\n");
    n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
} 
