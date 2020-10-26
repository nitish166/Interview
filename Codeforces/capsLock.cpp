#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	bool ok = true;
	for(int i=1; i<str.size(); i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			ok = false;
			break;
		}
	}
	if(ok)
	{
		for(int i=0; i<str.size(); i++)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i] +=32;
			}
			else
			{
				str[i] -=32;
			}
		}
	}
	cout<<str<<endl;
	return 0;
}