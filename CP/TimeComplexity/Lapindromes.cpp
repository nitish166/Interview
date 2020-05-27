#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		map<char, int> f, e;
		cin>>str;
		for(int i=0; i<str.size()/2; i++)
		{
			f[str[i]]++;
			e[str[str.size()-1-i]]++;
		}
		if(f==e)
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