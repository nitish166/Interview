#include <bits/stdc++.h>
using namespace std;


// Brute Force solution
// Not Efficent solution
// Time Complexity: O(n*n)
int EquilibrumPoint(int* arr, int n)
{
	int lsum, rsum;
	int i,j;

	// check indexes one by one until equlibrium index is found
	for( i=0; i<n; i++)
	{
		// get left sum
		lsum=0;
		for(int j=0; j<i; j++)
		{
			lsum +=arr[j];
		}

		// get right sum
		rsum=0;
		for(int j=i+1; j<n; j++)
		{
			rsum +=arr[j];
		}

		// if lsum and rsum are same then we are done, return ith index
		if(lsum==rsum)
		{
			return i;
		}
	}
	// retrun -1 if no equlibrum index is found
	return -1;
}


// Time Complexity: O(n)
// Efficent Solution
int EquilibrumPoint(int* arr, int n)
{
	int sum=0;
	// get the total sum
	for(int i=0; i<n; i++)
	{
		sum +=arr[i];
	}

	int lsum=0;
	for(int i=0;i<n;i++)
	{
		// update sum to get the right sum
		// sum is now right sum
		sum = sum-arr[i];

		// lsum and sum, both are equal then return index i
		if(lsum==sum)
		{
			return i;
		}
		// update leftsum for the next iteration
		lsum +=arr[i];
	}
	// if there is no equilibrum point retrun -1!
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

		int ans =EquilibrumPoint(arr, n);
		cout<<ans;
		cout<<endl;
	}
	return 0;
}