#include <bits/stdc++.h>
using namespace std;

void getPath(int** edges, int n, int src, int des, bool* visited)
{
	vector<int> ans;
	if(edges[src][des]==1)
	{
		ans.push_back(src);
	}

	visited[src]=true;
	for(int i=0;i<n;i++)
	{
		if(i==src)
		{
			continue;
		}
		if(edges[src][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
			if(i==des)
			{
				ans.push_back(i);
				getPath(edges, n, i, des, visited);
			}
			
		}
	}
	sort(ans.begin(), ans.end());
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";	
	}

}



int main()
{
    int n,e;
    cin>>n>>e;
    int** edges = new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j] =0;
        }
    }
    
    for(int i=0;i<e;i++)
    {
        int sv,dv;
        cin>>sv>>dv;
        edges[sv][dv] =1;
        edges[dv][sv] =1;
    }
    
    bool* vertice = new bool[n];
    for(int i=0;i<n;i++)
    {
        vertice[i]=false;
    }
    int src, des;
    cin>>src>>des;
    getPath(edges, n, src, des, vertice);
    return 0;
}