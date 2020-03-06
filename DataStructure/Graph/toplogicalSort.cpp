void top(int v, vector<int> adj[], bool* visited, stack<int> &s)
{
    //vector<int>:: iterator it;
    visited[v]=true;
    // for(it = adj[v].begin(); it!=adj[v].end(); it++)
    // {
    //     if(!visited[*it])
    //     {
    //         top(*it, adj, visited, s);
    //     }
    // }
    for(auto x: adj[v])
    {
        if(!visited[x])
        {
            top(x, adj, visited, s);
        }
    }
    s.push(v);
}



int* topoSort(int V, vector<int> adj[]) {
    // Your code here
   bool* vis = new bool[V];
   for(int i=0;i<V;i++)
   {
       vis[i]=false;
   }
   stack<int> s;
   for(int i=0;i<V;i++)
   {
       if(!vis[i])
       {
           top(i, adj, vis, s);
       }
   }
   static int arr[50];
   // store element in array using stack
   int k=0;
   while(k<V)
   {
       arr[k] = s.top();
       s.pop();
       k++;
   }
   return arr;
}
