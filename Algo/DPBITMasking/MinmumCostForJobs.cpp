#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;

int minCost(int cost[4][4], int n, int p, int mask)
{
	if(p>=n)
	{
		return 0;
	}

	int minimum = INT_MAX;
	for(int j=0; j<n; j++)
	{
		if(!(mask&(1<<j))){
			int ans = minCost(cost, n, p+1, mask| (1<<j)) + cost[p][j];
			if(ans<minimum)
			{
				minimum = ans;
			}
		}
	}
	return minimum;
}


int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int cost[4][4] = {{10,2,6,5}, {1,15,12,8}, {7,8,9,3}, {15,13,4,10}}; 
   cout<<"Minmum Cost :"<<endl;
   cout<<minCost(cost,4,0,0)<<endl;
   return 0;
}