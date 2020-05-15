#include <bits/stdc++.h>
using namespace std;

// Linear search method
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


// Binary Search Method

int findExtra(int* a, int* b, int n)
{
	int index = n;

	int l = 0, r = n-1;
	while(l<=r)
	{
		int mid = (l+r)/2;

		// if middle element is same
		// of both arrays, it means
		// that extra element is after mid
		// so we update left to mid+1

		if(a[mid]==b[mid])
		{
			l = mid+1;
		}
		// if middle elements is different 
		// of the arrays, it means that 
		// the index we are searching for 
		// is either mid, or before mid
		// hence we update right to mid-1
		else
		{
			index = mid;
			right = mid-1;
		}
	}

	return index;
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