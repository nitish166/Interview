#include <bits/stdc++.h>
using namespace std;



bool isConnected(int** edges, int n, int sv, bool* visited)
{
    bool flag = false;
    visited[sv] = true;

    for(int i=0;i<n;i++)
    {
        if(i==sv)
        {
            continue;
        }

        if(edges[sv][i] && !visited[i])
        {
            isConnected(edges, n, i, visited);
            visited[i] = true;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            return false;
        }
    }
    return true;
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
    
    bool* visited = new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    bool ans =isConnected(edges, n, 0, visited);
    if(ans==true)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}