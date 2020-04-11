//  using flag
//  used 2 row and column are same 

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


bool subsetSum(int* val, int n, int sum)
{
	// row
	bool** dp = new bool*[2];
	for(int i=0; i<=1; i++)
	{
		// column
		dp[i] = new bool[sum+1];
	}

	for(int i=0;i<=sum;i++)
	{
		dp[0][i] = false;
	}

	dp[0][0] = true;
	int flag =1;

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=sum; j++)
		{
			dp[flag][j] = dp[flag^1][j];
			if(j>=val[i-1])
			{
				// concept of or operator
				dp[flag][j] = dp[flag][j] || dp[flag^1][j-val[i-1]];
			}
		}
		flag = flag ^ 1;
	}
	bool ans = dp[flag^1][sum];
	// delete dp array
	for(int i=0;i<=n;i++)
	{
		delete[] dp[i];
	}
	delete [] dp;
	return ans;
}
int main()
{
 
    ios_base:: sync_with_stdio(false); cin.tie(0);
    int val[] ={1, 3, 5, 7, 9};
    int sum =12;
    cout<<subsetSum(val, 5, sum)<<endl;
    return 0;
}