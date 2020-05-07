#include <bits/stdc++.h>
using namespace std;

// Brute Force solution
// Time Complexity: O(n*n)

void ProductArray(int* arr, int n)
{
	vector<int> ans;
	int prod;
	for(int i=0; i<n; i++)
	{
		prod=1;
		for(int j=0; j<n; j++)
		{
			if(i!=j)
			{
				prod *=arr[j]; 	
			}
		}
		ans.push_back(prod);
	}
	for(int i=0; i<ans.size(); i++)
	{
		cout<<ans[i]<<" ";
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
		ProductArray(arr, n);
		cout<<endl;
	}
	return 0;
}