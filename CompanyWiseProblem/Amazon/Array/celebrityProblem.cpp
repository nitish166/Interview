#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
// Time Complexity: O(n^2)

// int know(int a, int b, int** mat)
// {
// 	return mat[a][b];
// }


// int getId(int** mat, int n)
// {
// 	int indegree[n] ={0}, outdegree[n] ={0};

// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=0; j<n; j++)
// 		{
// 			int x = know(i, j, mat);

// 			outdegree[i] +=x;
// 			indegree[j] +=x;
// 		}
// 	}

// 	for(int i=0; i<n; i++)
// 	{
// 		if(outdegree[i]==0 && indegree[i]==n-1)
// 			return i;
// 	}

// 	return -1;
// }


// using stack method
// Time Complexity: O(n)
// Space Complexity: O(1)


int know(int a, int b, int** mat)
{
	return mat[a][b];
}

int getId(int** mat, int n)
{
	// This about this test case?
	if(n==2)
	{
		return -1;
	}
	stack<int> s;

	int C; // celebrity

	// push everybody to stack
	for(int i=0; i<n; i++)
	{
		s.push(i);
	}

	// Extract top 2 from stack

	int A = s.top();
	s.pop();

	int B = s.top();
	s.pop();

	// find the potential celebrity

	while(s.size()>1)
	{
		if(know(A, B, mat))
		{
			A = s.top();
			s.pop();
		}
		else
		{
			B = s.top();
			s.pop();
		}
	}

	// potential candidate?

	C = s.top();
	s.pop();

	// Check last candidate

	if(know(C, B, mat))
	{
		C=B;
	}

	if(know(C, A, mat))
	{
		C=A;
	}

	// Check C is actually a celebrity or not

	for(int i=0; i<n; i++)
	{
		if((i != C) && (know(C, i, mat) || !know(i, C, mat)))
		{
			return -1;
		}
	}

	return C;
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