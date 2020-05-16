#include <bits/stdc++.h>
using namespace std;



int peakElement(int* arr, int n)
{
	if(arr[0]>arr[1])
	{
		return 0;
	}
	if(arr[n-1]>arr[n-2])
	{
		return n-1;
	}
	for(int i=1; i<n-1; i++)
	{
		if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
		{
			return i;
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
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		bool f =0;
		int A = peakElement(arr, n);

		if(n==1)
		{
			f=1;
		}
		else if(A==0 && arr[0]>=arr[1])
		{
			f=1;
		}
		else if(A==n-1 && arr[n-1]>=arr[n-2])
		{
			f=1;
		}
		else if(arr[A] >=arr[A+1] && arr[A]>= arr[A-1])
		{
			f=1;
		}
		else
		{
			f=0;
		}
		cout<<f<<endl;

	}
}