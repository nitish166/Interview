#include <bits/stdc++.h>
using namespace std;

// 2^n == (1<<n)

int minCostI(int cost[4][4], int n)
{
	int* dp = new int[1<<n];
	for(int i=0; i<1<<n; i++)
	{
		dp[i] = INT_MAX;
	}
	dp[0] =0;

	for(int mask=0; mask<((1<<n)-1); mask++)
	{
		// Count Number of set Bit
		int temp = mask;
		int k =0;
		while(temp>0)
		{
			if((temp%2)==1)
			{
				k++;
			}
			temp = temp/2;
		} 

		for(int j=0; j<n; j++)
		{
			if(!(mask&(1<<j)))
			{
				dp[mask | (1<<j)] = min(dp[mask |(1<<j)], dp[mask]+ cost[k][j]);
			}
		}
	}
	return dp[(1<<n) -1];
}

int main()
{
	int cost[4][4] = {{10,2,6,5}, {1,15,12,8}, {7,8,9,3}, {15,13,4,10}};
	cout<<"Minmum Cost with Iterative :"<<endl;
	cout<<minCostI(cost, 4)<<endl;
	return 0;
}