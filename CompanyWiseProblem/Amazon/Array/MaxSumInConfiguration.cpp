#include <bits/stdc++.h>
using namespace std;


// Bruteforce Solution
// Time Complexity: O(n^2)
// Space : O(1)

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



// Better Solution compare to Brute Force 
// Time Complexity : O(n)
// Space Complexity: O(1)

int SumInConfiguration(int* arr, int n)
{
	// compute sum of all array element
	int curr_sum=0;
	for(int i=0; i<n; i++)
	{
		curr_sum += arr[i];
	}

	// compute sum of i*arr[i] for initial
	int curr_value =0;
	for(int i=0; i<n; i++)
	{
		curr_value += i*arr[i]; 
	}

	// initialize ans
	int ans = curr_value;

	for(int i=1; i<n; i++)
	{
		// compute next value using previous
		// value of O(1) Time
		int next_value = curr_value - (curr_sum -arr[i-1]) + arr[i-1]*(n-1);

		// update current value
		curr_value = next_value;

		// update ans if required
		ans = max(ans, next_value);

	}

	return ans;
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