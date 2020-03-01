#include <bits/stdc++.h>
using namespace std;


vector<int>* getPathHeleper(int** edges, int n, int src, int des, bool* visited)
{
	if(src==des)
	{
		vector<int>* Output = new vector<int>();
		Output->push_back(des);
		return Output;
	}
	visited[src] = true;
	for(int i=0;i<n;i++)
	{
		// There is edge between start vertice to i
		if(edges[src][i] && !visited[i])
		{
			vector<int>* smallOutput = getPathHeleper(edges, n, i, des, visited);
			// if we fond the path then push inside smallOutput
			if(smallOutput !=NULL)
			{
				smallOutput->push_back(src);
				return smallOutput;
			}
		}
	}
	return NULL;
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
    	cout<<"Path :"<<endl;
    	for(int i=0;i<output->size();i++)
    	{
    		cout<<output->at(i)<<" ";
    	}
    	delete [] output;
    }
    else
    {
    	cout<<"There is no Path"<<endl;
    }
    // delete allocated memory
    
    return 0;
}