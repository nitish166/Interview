#include <bits/stdc++.h>
using namespace std;


// Navie solution
// Time complexity: O(n)
// Space complexity: O(1)
int findFloor(int* arr, int n, int x)
{
	int ans =0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] <=x)
		{
			ans++;
		}
	}
	return ans-1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int ans = findFloor(arr, n, x);
		cout<<ans<<endl;
	}
	return 0;
}