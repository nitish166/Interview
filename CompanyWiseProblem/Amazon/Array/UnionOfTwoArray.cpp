#include <bits/stdc++.h>
using namespace std;

void unionOfTwoArray(int* arr1, int* arr2, int n, int m)
{
	set<int> s1;
	for(int i=0; i<n; i++)
	{
		s1.insert(arr1[i]);
	}

	for(int i=0; i<m; i++)
	{
		s1.insert(arr2[i]);
	}


	set<int>:: iterator it;
	vector<int> ans;

	for(it = s1.begin(); it!=s1.end(); it++)
	{
		ans.push_back(*it);
	}

	sort(ans.begin(), ans.end());

	for(int i=0; i<ans.size(); i++)
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