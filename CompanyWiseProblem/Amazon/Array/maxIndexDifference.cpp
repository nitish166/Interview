#include <bits/stdc++.h>
using namespace std;


// BruteForce Solution
// Time Complexity: O(n)
// Space Complexity: O(1)

// int maxDiff(int* arr, int n)
// {
// 	int dis=0;
// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=i+1; j<n; j++)
// 		{
// 			if(arr[i]<=arr[j])
// 			{
// 				int temp = j-i;
// 				dis = max(temp, dis);
// 			}
// 		}
// 	}

// 	return dis;
// }


// Time Complexity: O(n)
// Space Complexity: O(n)


int maxDiff(int* arr, int n)
{
	int* larray = new int[(sizeof(int)*n)];
	int* rarray = new int[(sizeof(int)*n)];

	larray[0] = arr[0];
	for(int i=1; i<n; i++)
	{
		larray[i] = min(arr[i], larray[i-1]);
	}

	rarray[n-1] = arr[n-1];

	for(int  j = n-2; j>=0; j--)
	{
		rarray[j] = max(arr[j], rarray[j+1]);
	}


	int i=0, j=0, diff=-1;

	while(j<n && i<n)
	{
		if(larray[i]<= rarray[j])
		{
			diff = max(diff, j-i);
			j++;
		}
		else
		{
			i++;
		}
	}

	return diff;
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

		int ans = maxDiff(arr, n);
		cout<<ans<<endl;
	}
}