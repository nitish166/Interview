#include <bits/stdc++.h>
using namespace std;

int SlidingFunction(int arr[], int n, int k)
{
	//base case
	if(n<k)
	{
		cout<<"Invalid"<<endl;
		return 0;
	}


	int max_sum=0;
	for(int i=0;i<k;i++)
	{
		max_sum +=arr[i];
	}

	int curr_sum=max_sum;
	for(int i=k;i<n;i++)
	{
		curr_sum +=arr[i] - arr[i-k]; 
		max_sum = max(curr_sum, max_sum);
	}

	return max_sum;
}


int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int ans =SlidingFunction(arr, n, k);
	cout<<ans<<endl;
	return 0;
}