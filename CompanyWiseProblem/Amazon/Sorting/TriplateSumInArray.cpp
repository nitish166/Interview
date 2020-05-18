#include <bits/stdc++.h>
using namespace std;

bool find3Array(int* arr, int n, int x)
{
	sort(arr, arr+n);
	bool flag = false;
	for(int i=0; i<n; i++)
	{
		int l = i+1;
		int r = n-1;
		int temp = arr[i];
		while(l<r)
		{
			if(temp+arr[l]+arr[r]==x)
			{
				l++;
				r--;
				flag = true;
			}
			else if(temp+arr[l]+arr[r]<x)
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	}
	return flag;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		bool ans = find3Array(arr, n, x);
		cout<<ans<<endl;
	}
}