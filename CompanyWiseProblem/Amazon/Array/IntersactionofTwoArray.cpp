#include <bits/stdc++.h>
using namespace std;
int NumberofElementsInintersection(int a[], int b[], int n, int m);

int NumberofElementsInintersection(int a[], int b[], int n, int m)
{
	set<int> s;
	for(int i=0; i<n; i++)
	{
		s.insert(a[i]);
	}

	int count=0;
	vector<int> ans;
	for(int i=0; i<m; i++)
	{
		if(s.find(b[i]) != s.end())
		{
			ans.push_back(b[i]);
		}
	}

	for(int i=0; i<ans.size()-1; i++)
	{
		cout<<ans[i]<<" ";
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;

		int a[n], b[m];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<m; i++)
		{
			cin>>b[i];
		}

		cout<< NumberofElementsInintersection(a,b,n,m)<<endl;
	}

	return 0;
}