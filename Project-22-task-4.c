#include <bits/stdc++.h>
using namespace std;

// Function to return maximum diagonal
int maxDiagonalSum(vector<vector<int> > arr, int N)
{
	// Initialize maxSum
	int maxSum = 0;

	// Traverse through the columns
	for (int i = 0; i < N; i++) {

		// Initialize r and c
		int row = 0, col = i;

		// Diagonal sums
		int sum1 = 0, sum2 = 0;
		while (col < N && row < N) {
			sum1 += arr[row][col];
			sum2 += arr[col][row];
			row++;
			col++;
		}

		// Update maxSum with
		// the maximum sum
		maxSum = max({ sum1, maxSum, sum2 });
	}

	// Return the maxSum
	return maxSum;
}


int main()
{
	// Given matrix mat[][]
	vector<vector<int> > mat
		= { { 1, 2, 5, 7 },
			{ 2, 6, 7, 3 },
			{ 12, 3, 2, 4 },
			{ 3, 6, 9, 4 } };
	int N = mat.size();

	// Function Call
	cout << maxDiagonalSum(mat, N);

	return 0;
}

