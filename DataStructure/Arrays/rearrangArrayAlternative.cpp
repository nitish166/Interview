#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
	return a>b;
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

		vector<int> arr2;
		for(int i=0;i<n;i++)
		{
		 	arr2.push_back(arr[i]);
		}

		sort(arr, arr+n, compare);

		vector<int> res;
		for(int i=0;i<<n;i++)
		{
			res.push_back(arr[i]);
			res.push_back(arr2[i]);
		}

		for(int i=0;i<n;i++)
		{
			cout<<res[i]<<" ";
		}
		cout<<endl;

	}

	return 0;
}