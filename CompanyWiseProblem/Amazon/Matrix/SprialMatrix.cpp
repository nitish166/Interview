#include <bits/stdc++.h>
using namespace std;

#define SIZE 30


void spirallyTraverse(int m, int n, int arr[SIZE][SIZE])
{
	int k=0, l=0;
	while(k<m && l<n)
	{
		// print the first row from the remaing rows
		for(int i=l; i<n; i++)
		{
			cout<<arr[k][i]<<" ";
		}
		k++;
		// print the last column from the remaing column

		for(int i=k; i<m; i++)
		{
			cout<<arr[i][n-1]<<" ";
		}
		n--;
		// print the last row from the remaing row
		if(k<m)
		{
			for(int i=n-1; i>=l; i--)
			{
				cout<<arr[m-1][i]<<" ";
			}
			m--;
		}
		
		// print the first column form the remaing column

		if(l<n)
		{
			for(int i=m-1; i>=k; i--)
			{
				cout<<arr[i][l]<<" ";
			}
			l++;
		}
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int arr[SIZE][SIZE] ={{0}};
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>arr[i][j];
			}
		}
		spirallyTraverse(m, n, arr);
		cout<<endl;
	}
	return 0;
}