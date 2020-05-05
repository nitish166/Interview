#include <bits/stdc++.h>
using namespace std;


// Bruteforce Solution
// Time Complexity: O(n^2)

int SumInConfiguration(int* arr, int n)
{
	int curr_max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		int curr_sum=0;
		for(int j=0; j<n; j++)
		{
			int idx = (i+j)%n;
			curr_sum += arr[idx]*j;
		}
		curr_max = max(curr_max, curr_sum);
	}
	return curr_max;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		int ans =SumInConfiguration(arr, n);
		cout<<ans<<endl;
	}
}