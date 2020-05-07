#include <bits/stdc++.h>
using namespace std;


int maxProfit(int* arr, int n)
{
	int sum1=0, sum2=0;
	for(int i=0; i<n; i+=2)
	{
		sum1 +=arr[i];
	}

	for(int i=1; i<n; i+=2)
	{
		sum2 +=arr[i];
	}
	
	if(sum1>sum2)
	{
		return sum1;
	}
	else
	{
		return sum2;
	}
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

		int ans = maxProfit(arr, n);
		cout<<ans<<endl;
	}
	return 0;
}