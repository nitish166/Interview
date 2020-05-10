#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
// Time Complexity: O(n^2)

int know(int a, int b, int** mat)
{
	return mat[a][b];
}


int getId(int** mat, int n)
{
	int indegree[n] ={0}, outdegree[n] ={0};

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int x = know(i, j, mat);

			outdegree[i] +=x;
			indegree[j] +=x;
		}
	}

	for(int i=0; i<n; i++)
	{
		if(outdegree[i]==0 && indegree[i]==n-1)
			return i;
	}

	return -1;
}







int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int** mat  = new int*[n];
		for(int i=0; i<n; i++)
		{
			mat[i] = new int[n];
			for(int j=0; j<n; j++)
			{
				cin>>mat[i][j];
			}
		}
		int ans =getId(mat, n);
		cout<<ans<<endl;
	}
}