#include<bits/stdc++.h>
using namespace std;


int findMissing(int* arr, int n)
{
	// declare present array and initialize with false value
	bool present[n+1] = {false};

	// check positive number in array and number should be less than max size of array
	// copy that number to present number and initialize with true.
	for(int i=0; i<n; i++)
	{
		if(arr[i]>0 && arr[i]<=n)
		{
			present[arr[i]]= true;
		}
	}

	// Why i starting from 1
	// Cause for returning the index no need add i+1
	for(int i=1; i<=n; i++)
	{
		if(!present[i])
		{
			return i;
		}
	}

	// if array looks like: {1,2,3,4,5}
	return n+1;
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
		 int ans =findMissing(arr, n);
		cout<<ans<<endl;
	}
	return 0;
}