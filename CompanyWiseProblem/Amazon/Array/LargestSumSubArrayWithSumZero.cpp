#include <bits/stdc++.h>
using namespace std;



// Bruite Force Solution
// Time Complexity: O(n^2)

int maxLen(int* arr, int n)
{
	int count=0;

	for(int i=0; i<n; i++)
	{
		int sum=0;
		for(int j=i; j<n; j++)
		{
			sum += arr[j];
			if(sum==0)
			{
				count = max(count, j-i+1);
			}
		}
	}
	return count;
}


int maxLen(int* arr, int n)
{
	unordered_map<int, int> presum;
	int sum = 0;
	int max_len =0;

	for(int i=0;i<n;i++)
	{
		sum +=arr[i];

		if(arr[i]==0 && max_len==0)
		{
			max_len =1;
		}

		if(sum==0)
		{
			max_len = i+1;
		}

		// Look for this sum in hash table

		if(presum.find(sum) !=presum.end())
		{
			max_len = max(max_len, i-presum[sum]);
		}
		else
		{
			presum[sum] =i;
		}
	}

	return max_len;
}




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}

		int ans = maxLen(arr, size);
		cout<<ans<<endl;
	}
}