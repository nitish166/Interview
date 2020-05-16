#include <bits/stdc++.h>
using namespace std;

// Efficent Solution
// Recursion method
// Time Complexity: O(logn)
// Space complexity: O(1)

int peakElementUtil(int* arr, int low, int high, int n)
{
	int mid = low + (high-low)/2;

	if((mid==0 || arr[mid]>= arr[mid-1]) && (mid==n-1  || arr[mid]>=arr[mid+1]))
	{
		return mid;
	}

	else if(mid>0 && arr[mid-1]>arr[mid])
	{
		return peakElementUtil(arr, low, (mid-1), n);
	}
	else
	{
		return peakElementUtil(arr, (mid+1), high, n);
	}
}



int peakElement(int* arr, int n)
{
	return peakElementUtil(arr, 0, n-1, n);
}


// Navie Solution
// Time complexity: O(n)
// Space complexity: O(1)
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