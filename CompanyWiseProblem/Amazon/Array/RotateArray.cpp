#include <bits/stdc++.h>
using namespace std;


void rotateArray(int* arr, int n, int d)
{
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		rotateArray(arr, n, d);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<end;
	}
}