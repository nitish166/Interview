// Program to check path in undirected graph
// Time complexity O(n)
// Concept use: DFS

#include <bits/stdc++.h>
using namespace std;



bool checkPath(int** edges, int n, int src, int des, bool* vertice)
{
    bool flag = false;
    if(edges[src][des]==1)
    {
        flag =true;
        return true;
    }
    vertice[src]=true;
    
    for(int i=0;i<n;i++)
    {
        if(i==src)
        {
            continue;
        }
        if(edges[src][i]==1)
        {
            if(vertice[i])
            {
                continue;
            }
            if(checkPath(edges, n, i, des, vertice)) return true;
            else checkPath(edges, n, i, des, vertice);
            
        }
    }
    return flag;
    
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
    bool ans =checkPath(edges, n, src, des, vertice);
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
