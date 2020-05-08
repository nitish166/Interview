#include <bits/stdc++.h>
using namespace std;
int NumberofElementsInintersection(int a[], int b[], int n, int m);

int NumberofElementsInintersection(int a[], int b[], int n, int m)
{
	vector<int> ans;
    for(int i=0; i<n; i++)
    {
        ans.push_back(a[i]);
    }
    
    for(int i=n; i<m; i++)
    {
        ans.push_back(b[i]);
    }
    

    for(int i=0; i<ans.size(); i++)
    {
    	cout<<ans[i]<<" ";
    }

    // map<int, int> m;
    // for(int i=0; i<ans.size(); i++)
    // {
    //     m[ans[i]]++;
    // }
    
    // map<int, int>:: iterator it;
    // int count=0;
    // for(it = m.begin(); it!=m.end(); it++)
    // {
    //     if(it->second>=2)
    //     {
    //         count++;
    //     }
    // }
    // return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;

		int a[n], b[m];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<m; i++)
		{
			cin>>b[i];
		}

		cout<< NumberofElementsInintersection(a,b,n,m)<<endl;
	}

	return 0;
}