#include <bits/stdc++.h>
using namespace std;


void rotate(vector<vector<int> >& matrix)
{
	// Function for do transpose of matrix
	int n = matrix.size();
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}

	// After transpose we swap elements of column
	// one by one for finding left rotation of matrix 
	// by 90 degree
	for(int i=0; i<n; i++)
	{
		for(int j=0, k=n-1; j<k; j++, k--)
		{
			swap(matrix[j][i], matrix[k][i]);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		// For input in 2D matrix
		vector<vector<int> > matrix(n);
		for(int i=0; i<n; i++)
		{
			matrix[i].resize(n);
			for(int j=0; j<n; j++)
			{
				cin>>matrix[i][j];
			}
		}

		rotate(matrix);
		
		//for printing the  matrix
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<matrix[i][j]<<" ";
			}
			// for new line
			cout<<endl;
		}
	}
	return 0;
}