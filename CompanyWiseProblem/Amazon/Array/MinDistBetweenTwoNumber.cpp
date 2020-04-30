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
		int x, y;
		cin>>x>>y;
		int d1=0, d2=0;
		for(int i=0; i<n; i++)
		{
			if(arr[i]==x)
			{
				d1=i;
				break;
			}
		}
		for(int i=0; i<n; i++)
		{
			if(arr[i]==y)
			{
				d2=i;
				break;
			}
		}
		if(d1==0 && d2==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			int ans = d2-d1;
			cout<<ans<<endl;
		}
	}
	return 0;
}