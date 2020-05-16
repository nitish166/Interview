#include <bits/stdc++.h>
using namespace std;


// Navie solution
// Time complexity: O(n)
// Space complexity: O(1)
// int findFloor(int* arr, int n, int x)
// {
// 	int ans =0;
// 	for(int i=0; i<n; i++)
// 	{
// 		if(arr[i] <=x)
// 		{
// 			ans++;
// 		}
// 	}
// 	return ans-1;
// }


// Efficent solution
// Time complexity: O(logn)
// Binary Search method


int findFloorUtil(int* arr, int low, int high, int x)
{
	// if low and high cross each other
	if(low>high)
	{
		return -1;
	}

	// if last element is smaller than x
	if(x>=arr[high])
	{
		return high;
	}

	// find the middle point
	int mid = (low + high)/2;

	// if middle point is floor
	if(arr[mid]==x)
	{
		return mid;
	}

	// if x lies between mid-1 and mid
	if(mid>0 && arr[mid-1]<=x && x<arr[mid])
	{
		return mid-1;
	}

	// if x is smaller than mid, floor must be in left side
	if(x<arr[mid])
	{
		return findFloorUtil(arr, low, mid-1, x);
	}

	// if mid-1 is not floor and x is greater than 
	// arr[mid]
	return findFloorUtil(arr, mid+1, high, x);
}


int findFloor(int* arr, int n, int x)
{
	return findFloorUtil(arr, 0, n-1, x);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int ans = findFloor(arr, n, x);
		cout<<ans<<endl;
	}
	return 0;
}