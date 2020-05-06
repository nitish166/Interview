#include <bits/stdc++.h>
using namespace std;


// BruteForce Solution
// Time Complexity: O(n^2)


int InversionCount(int* arr, int n)
{
	int count=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				count++;
			}
		}
	}
	if(count !=0)
	{
		return count;
	}
	return 0;
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
		int ans = InversionCount(arr, n);
		cout<<ans<<endl;
	}
	return 0;
}