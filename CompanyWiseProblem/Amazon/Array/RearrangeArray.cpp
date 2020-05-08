#include <bits/stdc++.h>
using namespace std;


// BruteForce Solution
// using Extra Space
// Space Complexity: O(n)
// Time Complexity: O(n)

void rearrangeArray(int* arr, int n)
{
	vector<int> ans;
	for(int i=0; i<n; i++)
	{
		int temp = arr[i];
		int x = arr[temp];
		temp = x;
		ans.push_back(temp);
	}

	for(int i=0; i<n; i++)
	{
		cout<<ans[i]<<" ";
	}
}

// Time complexity : O(n)
// Space complexity: O(1)

void rearrangeArray(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		arr[i] += (arr[arr[i]]%n)*n;
	}

	for(int i=0; i<n; i++)
	{
		arr[i] /=n;
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
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

		rearrangeArray(arr, n);
		cout<<endl;
	}
}