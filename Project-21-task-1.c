#include <iostream> 
#define R 3 
#define C 6 
using namespace std; 

// Function that print matrix in reverse spiral form. 
void ReversespiralPrint(int m, int n, int a[R][C]) 
{ 
	 
	long int b[100]; 
	
	
	int i, k = 0, l = 0; 
	
	
	int z = 0; 
	

	int size = m*n; 

	while (k < m && l < n) 
	{
		int val; 
		

		for (i = l; i < n; ++i) 
		{ 
	
			val = a[k][i]; 
			b[z] = val; 
			++z; 
		} 
		k++; 

		
		for (i = k; i < m; ++i) 
		{ 
		
			val = a[i][n-1]; 
			b[z] = val; 
			++z; 
		} 
		n--; 

		
		if ( k < m) 
		{ 
			for (i = n-1; i >= l; --i) 
			{ 
		
				val = a[m-1][i]; 
				b[z] = val; 
				++z; 
			} 
			m--; 
		} 

	
		if (l < n) 
		{ 
			for (i = m-1; i >= k; --i) 
			{ 
				
				val = a[i][l]; 
				b[z] = val; 
				++z; 
			} 
			l++; 
		} 
	} 
	for (int i=size-1 ; i>=0 ; --i) 
	{ 
		cout<<b[i]<<" "; 
	} 
} 


int main() 
{ 
	int a[R][C] = { {1, 2, 3, 4, 5, 6}, 
					{7, 8, 9, 10, 11, 12}, 
					{13, 14, 15, 16, 17, 18}}; 
	ReversespiralPrint(R, C, a); 
	return 0; 
}

