#include <bits/stdc++.h>
using namespace std;
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

		int prehead =INT_MAX;
		int ans =0;
		for(int i=0; i<n; i++)
		{
			if(prehead>=arr[i])
			{
				ans++;
				prehead = arr[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}