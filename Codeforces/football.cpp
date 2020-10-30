#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0; i<n; i++)
	{
		string str;
		cin>>str;
		v.push_back(str);
	}
	map<string, int> m;
	for(int i=0; i<n; i++)
	{
		m[v[i]]++;
	}
	int max = INT_MIN;
	map<string, int> :: iterator it;
	for(it= m.begin(); it !=m.end(); it++)
	{
		if(it->second > max)
		{
			max = it->second;
		}
	}

	for(it= m.begin(); it !=m.end(); it++)
	{
		if(it->second = max)
		{
			cout<<it->first<<endl;
			break;
		}
	}

	return 0;
}