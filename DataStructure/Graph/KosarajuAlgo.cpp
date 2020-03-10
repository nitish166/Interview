#include<bits/stdc++.h>
using namespace std;

void dfs1(int v,stack<int> &st,bool vis[],vector<int> adj[])
{
    vis[v]=true;
    for(auto i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(vis[*i]==false)
            dfs1(*i,st,vis,adj);
    }
   
    st.push(v);
}
void dfs2(int v,bool vis[],vector<int> grev[])
{
    vis[v]=true;
    for(auto x: grev[v])
    {
        if(vis[x]==false)
        {
            dfs2(x, vis, grev);
        }
    }
}
int kosaraju(int V, vector<int> adj[])
{
    // print(adj,V);
    bool vis[V]={};
    stack<int> st;
    for(int v=0;v<V;v++)
    {
        if(vis[v]==false)
        {
           dfs1(v,st,vis,adj); 
        }
            
    }

    //making new graph (grev) with reverse edges as in adj[]
    vector<int> grev[V];
    for(int i=0;i<V+1;i++)
    {
        for(auto x: adj[i])
        {
            grev[x].push_back(i);
        }
    }
    for(int i=0;i<V;i++)
    {
        vis[i]=false;
    }
    int cnt=0;
    while(!st.empty())
    {
        int t=st.top();
        st.pop();
        if(vis[t]==false)
        {
            dfs2(t,vis,grev);
            cnt++;
        }
    }
    return cnt;

}


int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b ;
   	    cin>>a>>b;
   	    int m,n;
   	    vector<int> adj[a+1];
        for(int i=0;i<b;i++){
            cin>>m>>n;
            adj[m].push_back(n);
        }
        // exit(0);
        cout<<kosaraju(a, adj)<<endl;
    }
    return 0;
}  