#include <bits/stdc++.h>
using namespace std;



void boundaryTraversal(int n1, int m1, int** arr)
{
	// base case
    if(n1==1)
    {
        int i=0;
        while(i<m1)
        {
            cout<<arr[0][i++]<<" ";
        }
    }
    else if(m1==1)
    {
        int i=0;
        while(i<n1)
        {
            cout<<arr[i++][0]<<" ";
        }
    }
    else
    {
        int k=0;
        // Traversing the first row
    	for(int i=0; i<m1; i++)
    	{
        	cout<<arr[k][i]<<" ";
    	}
    	// Traversing the last column
    	for(int i=1; i<n1; i++)
    	{
        	cout<<arr[i][m1-1]<<" ";
    	}
    	// Traversing the last row
    	for(int i=m1-2; i>=0; i--)
    	{
        	cout<<arr[n1-1][i]<<" ";
    	}
    	// Traversing the first column
    	for(int i=n1-2; i>0; i--)
    	{
        	cout<<arr[i][k]<<" ";
   		}
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
}