#include <bits/stdc++.h>
using namespace std;


void countDistinct(int n, int k, int* arr)
{
	int res=k;
	int ans=0;
	for(int i=0; i<n; i++)
	{
		int cnt=0;
		for(int j=i; j<k; j++)
		{
			if(arr[j] !=arr[j+1])
			{
				cnt++;
			}
		}
		k++;
		cout<<cnt<<" ";
		ans++;
		if(ans==res)
		{
			break;
		}
	}
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		countDistinct(n,k,arr);
		cout<<endl;
	}
	return 0;
}