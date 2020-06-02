#include <bits/stdc++.h>
using namespace std;


char FirstReaptedCharacter(char *str)
{
	int i, len = strlen(str);
	int count[256]; // additional array
	for(int i=0; i<256; i++)
	{
		count[i]=0;
	}
	unsigned char ch;
	for(i=0; i<len; i++)
	{
		if(count[str[i]]==1)
		{
			return str[i];
			break;
		}
		else
		{
			count[str[i]]++;
		}
	}
	if(i==len)
	{
		ch = '1';
		return ch;
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char str[n];
		for(int i=0; i<n; i++)
		{
			cin>>str[i];
		}

		char ch = FirstReaptedCharacter(str);
		cout<<ch<<endl;
	}
	return 0;
}