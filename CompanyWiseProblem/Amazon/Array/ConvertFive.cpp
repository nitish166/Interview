#include<bits/stdc++.h>
using namespace std;

void convertFive(int n)
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

	for(int i=0; i<ans.size(); i++)
	{
		cout<<ans[i];
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
		convertFive(n);
		cout<<endl;
	}
}