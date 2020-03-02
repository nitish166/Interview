// Program to get path in undirected graph using BFS
// Time complexity O(n)
 
#include <bits/stdc++.h>
using namespace std;

vector<int>* getPathHeleper(int** edges, int n, int sv, int ev, bool* visited)
{
    unordered_map<int, int> parent;
	  queue<int> que;
    que.push(sv);
    visited[sv];
    bool done = false;
    while(!que.empty() && !done)
    {
        int front = que.front();
        que.pop();
        for(int i=0;i<n;i++)
        {
            if(edges[front][i] && !visited[i])
            {
                parent[i] = front;
                que.push(i);
                visited[i] = true;
                if(i==ev)
                {
                    done=true;
                    break;
                }
            }
        }
    }
    if(!done)
    {
        return NULL;
    }
    else
    {
        vector<int>* output = new vector<int>();
        int current = ev;
        output->push_back(ev);
        while(current !=sv)
        {
            current = parent[current];
            output->push_back(current);
        }
        return output;
        delete output;
    }


}


vector<int>* getPath(int** edges, int n, int src, int des)
{
	bool* visited = new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}

	vector<int>* output = getPathHeleper(edges, n, src, des, visited);
	delete[] visited;
	return output;
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

    int src, des;
    cin>>src>>des;
    vector<int>* output = getPath(edges, n, src, des);
    if(output !=NULL)
    {
    	for(int i=0;i<output->size();i++)
    	{
    		cout<<output->at(i)<<" ";
    	}
    	delete output;
    }
    return 0;
}
