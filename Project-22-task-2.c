#include <bits/stdc++.h> 
#define R 5 
#define C 3 
using namespace std; 

void precompute(int mat[R][C], int ryt[][C + 2], 
							int dwn[R + 2][C + 2]) 
{ 
	// Travesing the 2d matrix from top-right. 
	for (int j=C-1; j>=0; j--) 
	{ 
		for (int i=0; i<R; ++i) 
		{ 
			// If (i,j) contain 0, do nothing 
			if (mat[i][j] == 0) 
				ryt[i][j] = 0; 

			// Counting consecutive 1 on right side 
			else
				ryt[i][j] = ryt[i][j + 1] + 1; 
		} 
	} 


	// Travesing the 2d matrix from bottom-left. 
	for (int i = R - 1; i >= 0; i--) 
	{ 
		for (int j = 0; j < C; ++j) 
		{ 
			// If (i,j) contain 0, do nothing 
			if (mat[i][j] == 0) 
				dwn[i][j] = 0; 

			// Counting consecutive 1 down to (i,j). 
			else
				dwn[i][j] = dwn[i + 1][j] + 1; 
		} 
	} 
} 

// Return maximum size submatrix with row swap allowed. 
int solveRowSwap(int ryt[R + 2][C + 2]) 
{ 
	int b[R] = { 0 }, ans = 0; 

	for (int j=0; j<C; j++) 
	{ 
		// Copying the column 
		for (int i=0; i<R; i++) 
			b[i] = ryt[i][j]; 

		// Sort the copied array 
		sort(b, b + R); 

		// Find maximum submatrix size. 
		for (int i = 0; i < R; ++i) 
			ans = max(ans, b[i] * (R - i)); 
	} 

	return ans; 
} 

// Return maximum size submatrix with column 
// swap allowed. 
int solveColumnSwap(int dwn[R + 2][C + 2]) 
{ 
	int b[C] = { 0 }, ans = 0; 

	for (int i = 0; i < R; ++i) 
	{ 
		// Copying the row. 
		for (int j = 0; j < C; ++j) 
			b[j] = dwn[i][j]; 

		// Sort the copied array 
		sort(b, b + C); 

		// Find maximum submatrix size. 
		for (int i = 0; i < C; ++i) 
			ans = max(ans, b[i] * (C - i)); 
	} 

	return ans; 
} 

void findMax1s(int mat[R][C]) 
{ 
	int ryt[R + 2][C + 2], dwn[R + 2][C + 2]; 
	memset(ryt, 0, sizeof ryt); 
	memset(dwn, 0, sizeof dwn); 

	precompute(mat, ryt, dwn); 

	// Solving for row swap and column swap 
	int rswap = solveRowSwap(ryt); 
	int cswap = solveColumnSwap(dwn); 

	// Comparing both. 
	(rswap > cswap)? (cout << "Row Swap\n" << rswap << endl): 
					(cout << "Column Swap\n" << cswap << endl); 
} 

int main() 
{ 
	int mat[R][C] = {{ 0, 0, 0 }, 
					{ 1, 1, 0 }, 
					{ 1, 1, 0 }, 
					{ 0, 0, 0 }, 
					{ 1, 1, 0 }}; 

	findMax1s(mat); 
	return 0; 
}

