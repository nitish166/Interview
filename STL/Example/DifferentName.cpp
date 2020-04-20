// Find count of different name
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;


	// in map we can't use char data type

	map<string, int> m;

	// count of same name
	// for(int i=0; i<s.size(); i++)
	// {
	// 	m[s[i]]++;
	// }



	// if in string, there are space between character then we can use getline

	while(getline(cin, s, ' '))
	{
		m[s]++;
	}
	map<string, int>:: iterator it;
	bool flag = false;
	for(it = m.begin(); it!=m.end(); it++)
	{
		if(it->second>=2)
		{
			
			cout<<it->first <<" "<<it->second<<endl;
			flag=true;
		}
	}

	if(flag==false)
	{
		cout<<"-1"<<endl;
	}

	return 0;

}