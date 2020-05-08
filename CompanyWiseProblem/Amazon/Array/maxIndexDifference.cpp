#include <bits/stdc++.h>
using namespace std;


// BruteForce Solution
// Time Complexity: O(n)
// Space Complexity: O(1)

int maxDiff(int* arr, int n)
{
	int dis=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]<=arr[j])
			{
				int temp = j-i;
				dis = max(temp, dis);
			}
		}
	}

	return dis;
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