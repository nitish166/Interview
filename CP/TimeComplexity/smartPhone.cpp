#include <bits/stdc++.h>
using namespace std;




long long int maxRevenue(long long* arr, long long n)
{
	sort(arr, arr+n);
	long long  maxProfit=-1;
	for(register long long  i=0; i<n; i++)
	{
		if((arr[i]*(n-i))>maxProfit)
		{
			maxProfit=arr[i]*(n-i);
		}
	}
	return maxProfit;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long  n;
		cin>>n;
		long long* arr = new long long[n];
		for(register long long  i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		long long ans = maxRevenue(arr, n);
		cout<<ans<<endl;
	}
	return 0;
}