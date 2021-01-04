 
#include <stdio.h> 

bool check(int n) 
{ 

	return 1162261467 % n == 0; 
} 


int main() 
{ 
	int n = 9; 
	if (check(n)) 
		printf("Yes"); 
	else
		printf("No"); 

	return 0; 
} 

