#include <bits/stdc++.h>
using namespace std;


// Time complexity: O(n)
// Space complexity: O(1)

int findExtra(int* a, int* b, int n)
{
	for(int i=0; i<n; i++)
	{
		if(a[i] !=b[i])
		{
			return i;
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
		int* a = new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		int* b = new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
		}

		int ans =findExtra(a, b, n);
		cout<<ans<<endl;
	}
}