#include <bits/stdc++.h>
using namespace std;

// define constant for row and column
#define n 4
#define m 5

// function to count elements 
// greater than mean
int countElements(int mat[][m])
{
	// For each row find minimum 
	// element and add to rowSum
	int rowSum = 0;
	for (int i = 0; i < n; i++) {
		int min = mat[i][0];
		for (int j = 1; j < m; j++)
			if (mat[i][j] < min)
				min = mat[i][j];
		rowSum += min;
	}
	
	// For each column find maximum 
	// element and add to colSum
	int colSum = 0;
	for (int i = 0; i < m; i++) {
		int max = mat[0][i];
		for (int j = 1; j < n; j++)
			if (max < mat[j][i])
				max = mat[j][i];
		colSum += max;
	}

	// Calculate mean of row-wise
	// minimum and column wise maximum
	int mean = (rowSum + colSum) / (m + n);
	
	// For whole matrix count 
	// elements greater than mean
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (mean < mat[i][j])
				count++;
	return count;
}

int main()
{
	int mat[n][m] = { 5, 4, 2, 8, 7,
					1, 5, 8, 3, 4,
					8, 5, 4, 6, 0,
					2, 5, 8, 9, 4 };
	cout << countElements(mat);
	return 0;
}


