#include<bits/stdc++.h>
using namespace std;


int getMinVertex(int* dist, bool* visited, int n)
{
	int minVertex = -1;
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && (minVertex == -1 || (dist[i] < dist[minVertex]))){
			minVertex = i;
		}
	}
	return minVertex;
}


void dijkstra(int** edges, int n)
{
	// visited array
	bool* visited = new bool[n]();

	// distance array
	int* dist = new int[n];

	// inittilize every node infinity
	for(int i=0;i<n;i++)
	{
		dist[i] = INT_MAX;

	}

	// make source vertice as zero
	dist[0]=0;

	for(int i=0;i<n-1;i++)
	{
		// Get univisted vertex with minimum distance
		int minVertex = getMinVertex(dist,visited,n);

		visited[minVertex] = true;

		// Explore all the neighbours of minVertex which are unvisited and update the distacnce array if required
		for(int j=0;j<n;j++)
		{
			if(edges[minVertex][j] && !visited[j])
			{
				int currD = dist[minVertex] + edges[minVertex][j];
				if(dist[j] > currD){
					dist[j] = currD;
				}
			}
		}
	}

	// print vertices and their respective distance
    for(int i=0; i<n; i++)
    {
    	cout<< i << " "<<dist[i] <<endl;
    }
    delete[] visited;
    delete[] dist;

}


int main()
{
	int n;
	int e;
	cin>>n>>e;

	// Adjacency Matrix
	int** edges = new int*[n];
	for(int i=0;i<n;i++)
	{
		edges[i] = new int[n];
		for(int j =0; j<n;j++){
		   edges[i][j] = 0;	
		}
	}

	for(int i = 0;i <e;i++)
	{
		int f, s, weight;
		cin >> f >> s >> weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	cout<<endl;
	dijkstra(edges, n);

	// delete memory
	for(int i =0;i<n;i++)
	{
		delete[] edges[i];
	}
	delete[] edges;
}