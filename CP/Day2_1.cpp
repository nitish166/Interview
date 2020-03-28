// Time complexity O(n)
#include<bits/stdc++.h>
using namespace std;

int kadneAlgo(int arr[], int n)
{
	int max_so_far =0;
	int max_so_end =0;

	for(int i=0;i<n;i++)
	{
		 max_so_far += arr[i];
		 if(max_so_far<0)
		 {
		 	max_so_far =0;
		 }

		 if(max_so_far>max_so_end)
		 {
		 	max_so_end = max_so_far;
		 }
	}
	return max_so_end;
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
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		int ans = kadneAlgo(arr, n);
		int max_wrap =0;

		for(int i=0; i<n; i++)
		{
			max_wrap += arr[i];
			arr[i] = -arr[i];
		}

		max_wrap = max_wrap + kadneAlgo(arr, n);
		if(max_wrap>ans)
		{
			cout<<max_wrap<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}

	}
}