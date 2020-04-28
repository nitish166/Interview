#include <bits/stdc++.h>
#include <string>
using namespace std;

int convertFive(int n)
{
	vector<int> ans;


	while(n!=0)
	{
		int r = n%10;
		ans.push_back(r);
		n = n/10;
	}


	for(int i=0; i<ans.size(); i++)
	{
		if(ans[i]==0)
		{
			ans[i]=5;
		}
	}


	reverse(ans.begin(), ans.end());

	string str="";

	for(int i=0; i<ans.size(); i++)
	{
		str += to_string(ans[i]);
	}

	int res = stoi(str);
	return res;

}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<convertFive(n);
		cout<<endl;
	}
}