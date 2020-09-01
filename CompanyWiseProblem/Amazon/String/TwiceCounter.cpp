#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>str[i];
	    }
	    map<string, int> m;
	    for(int i=0; i<n; i++)
	    {
	        m[str[i]]++;
	    }
	    int count =0;
	    for(auto x: m)
	    {
	        if(x.second==2)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}