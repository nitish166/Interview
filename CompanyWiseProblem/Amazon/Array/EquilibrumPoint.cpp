#include <bits/stdc++.h>
using namespace std;


// Brute Force solution
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