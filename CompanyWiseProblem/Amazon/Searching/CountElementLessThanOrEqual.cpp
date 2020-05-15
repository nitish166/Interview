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