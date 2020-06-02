#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string find(string s);

string find(string S)
{
	int i, len;
	len = S.size();
	int count[256];
	for(int i=0; i<256; i++)
	{
		count[i]=0;
	}
	for(int i=0; i<len; i++)
	{
		count[S[i]]++;
	}
	bool flag=false;
	char ch;
	for(int i=0;i<len; i++)
	{
		if(count[S[i]]==1)
		{
			flag=true;
			ch=S[i];
			break;
		}
	}
	if(flag==true)
    {
        string s(1, ch);
        return s;
    }
    else
    {
        string str="-1";
        return str;
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
		string s;
		cin>>s;
		find(s);
		cout<<find(s)<<endl;
	}
	return 0;
}