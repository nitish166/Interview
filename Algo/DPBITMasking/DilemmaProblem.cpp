// Find minimum touches required problem

#include <bits/stdc++.h>
using namespace std;

int find_touches(int pos, int mask, vector<string> &v, int** dp)
{

	// if first bit didn't match
	if((mask&(mask-1)) ==0){
		return 0;
	}

	// lenght of string * size of n : 1000*10
	if(pos<0)
	{
		return 10000;
	}

	if(dp[pos][mask] !=INT_MAX)
	{
		return dp[pos][mask];
	}

	int newmask1 =0;
	int newmask2 =0;
	int touches =0;

	for(int i=0; i<v.size(); i++)
	{
		if(mask &(1<<i))
		{
			touches++;
			if(v[i][pos] == '0')
			{
				newmask1 |=1<<i;
			}
			else
			{
				newmask2 |=1<<i;
			}
		}
	}
	int ans1 = find_touches(pos-1, newmask1, v, dp) + find_touches(pos-1, newmask2, v, dp) + touches;
	int ans2 = find_touches(pos-1, mask, v, dp);
	int ans = min(ans1, ans2);
	dp[pos][mask] = ans;
	return ans;
}


int minmumTouchesRequired(int n, vector<string> V)
{

	// created postion*mask dp array
	// postion: v[0].size()
	// mask: 1<<(n+1)

	int** dp = new int*[v[0].size()];
	for(int i=0;i<v[0].size(); i++)
	{
		dp[i] = new int[1<<(n+1)];
		for(int j=0; j<(1<<(n+1)); j++)
		{
			dp[i][j] = INT_MAX;
		}
	}


	// last position : v[0].size()-1
	// mask (1111111111): (1<<n)-1

	return find_touches(v[0].size()-1, (1<<n)-1 v, dp);
}