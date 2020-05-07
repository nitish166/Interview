#include <bits/stdc++.h>
using namespace std;


// BruteForce Solution
// Time Complexity: O(n^2)
// int InversionCount(int* arr, int n)
// {
// 	int count=0;
// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=i+1; j<n; j++)
// 		{
// 			if(arr[i]>arr[j])
// 			{
// 				count++;
// 			}
// 		}
// 	}
// 	if(count !=0)
// 	{
// 		return count;
// 	}
// 	return 0;
// }


// Using BIT method
// Time: O(logn)

int getSum(int* BIT, int index)
{
	int sum=0;

	// Traverse ancestors of BIT[index]
	for(; index>0; index -= index&(-index))
	{
		// Add current element of BIT to sum
		sum +=BIT[index];
	}
	return sum;
}


void updateBIT(int* BIT, int n, int index, int value)
{
	// Traverse all ancestors and add 'val'
	for(; index <=n; index += index&(index))
	{
		// Add 'val' to current node of BIT
		BIT[index] +=value;
	}
}


int getInvCount(int arr[], int n)
{
	int cnt=0;

	// find maximum element in arr[]

	int maxElement = INT_MIN;

	for(int i=0; i<n; i++)
	{
		if(arr[i]>maxElement)
		{
			maxElement = arr[i];
		}
	}

	// Create a BIT with size equal to maxElement+1
	// (Extra one is used so that elements can be directly
	// be used as index)

	int* BIT = new int[maxElement+1];
	for(int i=1; i<=maxElement; i++)
	{
		BIT[i] =0;
	}

	// Traverse all elements from right
	for(int i=n-1; i>=0; i--)
	{
		// get count of elements smaller than arr[i]
		cnt +=getSum(BIT, arr[i]-1);

		// add current element to BIT
		updateBIT(BIT, maxElement, arr[i], 1);

	}

	return cnt;
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
		int ans = getInvCount(arr, n);
		cout<<ans<<endl;
	}
	return 0;
}







