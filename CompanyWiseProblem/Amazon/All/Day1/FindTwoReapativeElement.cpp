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