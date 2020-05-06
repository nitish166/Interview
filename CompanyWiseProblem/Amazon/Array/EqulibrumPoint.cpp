#include <bits/stdc++.h>
using namespace std;


// Time Complexity: O(n)
// Space complexity: O(1)


int equlibrumPoint(int* arr, int n)
{

	int sum=0;
	int leftsum=0;

	// base case
	if(n==1)
	{
		return 1;
	}

	// calculated sum of whole element in array
	for(int i=0; i<n; i++)
	{
		sum +=arr[i];
	}

	for(int i=0; i<n; i++)
	{
		// here sum is behave like right sum
		sum -=arr[i];

		// if rsum and lsum are equal then return index
		if(sum==leftsum)
		{
			return i+1;
		}

		// update left sum
		leftsum +=arr[i];
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
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		int ans = equlibrumPoint(arr, n);
		cout<<ans;
		cout<<endl;
	}
}