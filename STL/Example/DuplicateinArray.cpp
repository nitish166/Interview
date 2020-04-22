#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	map<int, int> m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}

	map<int, int> :: iterator it;

	for(it = m.begin(); it!=m.end(); it++)
	{
		if(it->second==2)
		{
			cout<<it->first<<endl;
		}
	}
	return 0;
}