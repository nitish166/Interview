#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int** arr = new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = new int[n];
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}


	for(int col=0; col<n; col++)
	{
		if((col%2)==0)
		{
			for(int i=0; i<n; i++)
			{
				cout<<arr[i][col]<<" ";
			}
		}
		else
		{
			for(int i =n-1; i>=0; i--)
			{
				cout<<arr[i][col]<<" ";
			}
		}
	}
	return 0;
}