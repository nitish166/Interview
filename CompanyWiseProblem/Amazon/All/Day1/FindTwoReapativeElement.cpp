#include <bits/stdc++.h>
using namespace std;


// Brute Force Approch
// Time Complexity: O(n*n)

void repatitiveElement(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<" ";
			}
		}
	}
}


// Method 2
// Time Complexity: O(n)
// Space Complexity: O(n)

void repatitiveElement(int* arr, int n)
{
	int* count  = new int[sizeof(int)*(size-2)];
	for(int i=0; i<n; i++)
	{
		if(count[arr[i]]==1)
		{
			cout<<arr[i]<<" ";
		}
		else
		{
			count[arr[i]]++;
		}
	}
}


// Method 3 : Use array element as index
// Time Complexity: O(n)
// Space Complexity: O(1)

void repatitiveElement(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		if(arr[abs(arr[i])]>0)
		{
			arr[abs(arr[i])] = -arr[abs(arr[i])];
		}
		else
		{
			cout<< " "<<abs(arr[i])<<" ";
		}
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
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		repatitiveElement(arr, n);
		cout<<endl;
	}
	return 0;
}