#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


bool keypair(vector<int> A, int n, int x)
{
	int l =0;
	int r = n-1;
	while(l<r)
	{
		if(A[l]+A[r]==x)
		{
			return true;
		}
		else if(A[l]+A[r]<x)
		{
			l++;
		}
		else
		{
			r--;
		}
	}
	return false;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		vector<int> A;
		for(int i=0; i<n; i++)
		{
			cin>>A[i];
		}

		bool ans = keypair(A, n, x);
		if(ans)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}