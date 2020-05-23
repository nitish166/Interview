#include <bits/stdc++.h>
using namespace std;


void boundaryTraversal(int n, int m, int** arr)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(i==0 || j==0 || i==n-1 || j==m-1)
			{
				cout<<arr[i][j]<<"  ";
			}
			else
			{
				cout<<"  "; 
			}
			
		}
		cout<<endl;
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		int** arr = new int*[n];
		for(int i=0; i<n; i++)
		{
			arr[i] = new int[m];
			for(int j=0; j<m; j++)
			{
				cin>>arr[i][j];
			}
		}
		boundaryTraversal(n, m, arr);
		cout<<endl;
	}
	return 0;
}