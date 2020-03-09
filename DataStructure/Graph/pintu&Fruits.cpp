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
	    int count[51]={0};
	   
	    for(int i=0;i<n;i++)
	    {
	       
	            count[f[i]] +=p[i];
	        
	    }

	    int small = INT_MAX;
	    for(int i=1; i<=m;i++)
	    {
	      
	        if(count[i]<=small && count[i] !=0)
	        {
	            small = count[i];
	        }
	    }
	    cout<<small<<endl;
	}
	return 0;
}
