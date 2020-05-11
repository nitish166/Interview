#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(nlogn)
// Space complexity: O(n)

// void unionOfTwoArray(int* arr1, int* arr2, int n, int m)
// {
// 	set<int> s1;
// 	for(int i=0; i<n; i++)
// 	{
// 		s1.insert(arr1[i]);
// 	}

// 	for(int i=0; i<m; i++)
// 	{
// 		s1.insert(arr2[i]);
// 	}


// 	set<int>:: iterator it;
// 	vector<int> ans;

// 	for(it = s1.begin(); it!=s1.end(); it++)
// 	{
// 		ans.push_back(*it);
// 	}

// 	sort(ans.begin(), ans.end());

// 	for(int i=0; i<ans.size(); i++)
// 	{
// 		cout<<ans[i]<<" ";
// 	}

// }

// Time Complexity: O(n+m)
// Not handle duplicate elements

void unionOfTwoArray(int* arr1, int* arr2, int n, int m)
{
	int i=0, j=0;
	while(i<n && j<m)
	{
		// avoiding identical element in arr1
		while(i+1<n && arr1[i]==arr1[i+1])
		{
			i++;
		}

		// avoiding identical element in arr2
		while(j+1<m && arr2[j]==arr2[j+1])
		{
			j++;
		}

		// printing to smaller number to maintain ascending order
		if(arr1[i]<arr2[j])
		{
			cout<<arr1[i++]<<" ";
		}
		else if(arr2[j]<arr1[i])
		{
			cout<<arr2[j++]<<" ";
		}
		// if arr[i] is same as arr2[j], number is printed once and i and j are incremented
		else
		{
			cout<<arr1[i++]<<" ";
			j++;
		}
	}
	// loops break when either i or j reach end of arr1 and arr2 respectively

	while(i<n)
		// printing elements of arr1 if any left
	{
		// avoiding repetition
		while(i+1<n && arr1[i]==arr1[i+1])
		{
			i++;
		}
		cout<<arr1[i++]<<" ";
	}

	while(j<m)
		// printing elements of arr2 if any left
	{
		// Avoiding repetition
		while(j+1<m && arr2[j]==arr2[j+1])
		{
			j++;
		}
		cout<<arr2[j++]<<" ";
	}
}




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int* arr1 = new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr1[i];
		}

		int* arr2 = new int[m];
		for(int i=0; i<m; i++)
		{
			cin>>arr2[i];
		}

		unionOfTwoArray(arr1, arr2, n, m);
		cout<<endl;
	}
}