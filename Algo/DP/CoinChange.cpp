#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


int coin_change(int n, int* d, int m, int** output)
{
	if(n == 0)
	{
		return 1;
	}
	if(n<0)
	{
		return 0;
	}
	if(m == 0)
	{
		return 0;
	}
	if(output[n][m]>-1)
	{
		return output[n][m];
	}
	int first = coin_change(n-d[0], d, m, output);
	int second = coin_change(n, d+1, m-1, output);
	output[n][m] = first+second;
	return output[n][m];
}


int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   

   // Test cases 
   int t;
   cin>>t;
   while(t--)
   {
   		// number of coins
   		int m;
   		cin>>m;
   		int* d = new int[m];
   		for(int i=0;i<m;i++)
   		{
   			cin>>d[i];
   		}

   		// Denoting the cents
   		int n;
   		cin>>n;

   		// allocated 2D array, (n+1)*(numD+1)
   		int size = (n+1)*(m+1);
   		int** output = new int*[size];
   		for(int i=0; i<size; i++)
   		{
   			output[i] = new int[size];
   			for(int j=0; j<n; j++)
   			{
   				output[i][j] = -1;
   			}
   		}

   		cout<<coin_change(n, d, m, output)<<endl;
   }




   
   return 0;
}