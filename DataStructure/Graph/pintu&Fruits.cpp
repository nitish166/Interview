#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int f[51];
	    for(int i=0;i<n;i++)
	    {
	        cin>>f[i];
	    }
	    int p[51];
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i];
	    }
	    vector<int> count[51];
	   
	    for(int i=0;i<n;i++)
	    {
	       
	            count[f[i]].push_back(p[i]);
	        
	    }

	    int small = INT_MAX;
	    for(int i=1; i<=m;i++)
	    {
	        if(count[i].size()==0)
	        {
	            continue;
	        }
	        int temp=0;
	        for(int j=0;j<count[i].size();j++)
	        {
	            temp +=count[i][j];
	        }
	        if(temp<small)
	        {
	            small=temp;
	        }
	    }
	    cout<<small<<endl;
	}
	return 0;
}
