#include <bits/stdc++.h>
using namespace std;



bool checkPath(int** edges, int n, int src, int des, bool* vertice)
{
    if(edges[src][des]==1)
    {
        return true;
    }
    vertice[src]=true;
    queue<int> que;
    que.push(src);
    while(que.empty()==false)
    {
        int currentVertice = que.front();
        que.pop();
        
        for(int i=0;i<n;i++)
        {
            if(edges[currentVertice][i]==1 && !vertice[i])
            {
                if(i==des)
                {
                    return true;
                }
                que.push(i);
                vertice[i]=true;
            }
        }
    }
    return false;
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