void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    queue<int> que;
    que.push(s);
    while(!que.empty())
    {
        int temp = que.front();
        que.pop();
        if(!vis[temp])
        {
            cout<<temp<<" ";
            vis[temp] = true;
        }
        
        for(int i=0;i<adj[temp].size();i++)
        {
            if(!vis[adj[temp][i]])
            {
                que.push(adj[temp][i]);
            }
        }
    }
    
}
