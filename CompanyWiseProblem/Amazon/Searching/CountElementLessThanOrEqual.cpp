#include <bits/stdc++.h>
using namespace std;

// BruteForce Solution
// Time Complexity: O(n*n)
// Space Complexity: O(n)


void countEleLessThanOrEqual(int* arr1, int* arr2, int n, int m)
{
	
	
	for(int i=0; i<n; i++)
	{
		int cnt=0;
		for(int j=0; j<m; j++)
		{
			if(arr1[i]>=arr2[j])
			{
				cnt++;
			}
		}
		cout<<cnt<<" ";	
	}
}



// Efficent Solution
// Time complexity: O(nlogn+ mlogn)
// Space complexity: O(1)


int binary_search(int* arr2, int l, int h, int x)
{
	while(l<=h)
	{
		int mid = (l+h)/2;
		if(arr2[mid] <=x)
		{
			l = mid+1;
		}
		else
		{
			h = mid-1;
		}
	}
	// required index
	return h;
}



void countEleLessThanOrEqual(int* arr1, int* arr2, int n, int m)
{
	sort(arr2, arr2+m);
	for(int i=0; i<n; i++)
	{
		int index = binary_search(arr2, 0, m-1, arr1[i]);
		cout<<(index+1)<<" ";
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		int* arr1 = new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr1[i];
		}

		int* arr2 = new int[m];
		for(int i=0; i<m; i++)
		{
			cin>>arr2[i];
		}
		countEleLessThanOrEqual(arr1, arr2, n, m);
		cout<<endl;
	}
	return 0;
}