#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;



// this solution will take huge time 
int LongestCommonSubsequence(char* s1, char* s2)
{
	if(s1[0]=='\0' || s2[0]=='\0')
	{
		return 0;
	}

	// if first character of both string are same.
	if(s1[0]==s2[0])
	{
		return 1+ LongestCommonSubsequence(s1+1, s2+1);
	}
	else
	{
		int option1 = LongestCommonSubsequence(s1, s2+1);
		int option2 = LongestCommonSubsequence(s1+1, s2);
		return max(option1, option2);
	}
}

int lcs2Helper(char* s1, char* s2, int m, int n, int** dp)
{
	if(m==0 || n==0)
	{
		return 0;
	}
	// if work is already done at dp[m][n] so, we are not going to do the same work again.
	if(dp[m][n]> -1)
	{
		return dp[m][n];
	}
	int ans;
	if(s1[0] == s2[0])
	{
		ans = 1 + lcs2Helper(s1+1, s2+1, m-1, n-1, dp);
	}
	else
	{
		int option1 = lcs2Helper(s1, s2+1, m, n-1, dp);
		int option2 = lcs2Helper(s1+1, s2, m-1, n, dp);
		ans = max(option1, option2);
	}
	// we will store the ans into dp[m][n] 
	dp[m][n] = ans;
	return ans;  

}



int lcs2(char* s1, char* s2)
{
	int m=strlen(s1);
	int n=strlen(s2);
	// size of dp m+1 and n+1 
	int** dp = new int*[m+1];
	for(int i=0; i<=m; i++)
	{
		dp[i] = new int[n+1];
		for(int j=0;j<=n;j++)
		{
			// why -1, Cause LCS might be zero(0) 
			dp[i][j] =-1;
		}
	}
	int ans = lcs2Helper(s1, s2, m, n, dp);
	for(int i=0;i<m;i++)
	{
		delete [] dp[i];
	}
	delete [] dp;
	return ans;
}



int lcsI(char* s1, char* s2)
{
	int m=strlen(s1);
	int n=strlen(s2);

	int** dp = new int*[m+1];
	for(int i=0;i<=m;i++)
	{
		dp[i] = new int[n+1];
	}

	for(int i=0;i<=m;i++)
	{
		dp[i][0] =0;
	}

	for(int i=0;i<=n;i++)
	{
		dp[0][i] =0;
	}

	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(s1[m-i] == s2[n-j])
			{
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	int ans = dp[m][n];
	// delete 2d array
	for(int i=0;i<=m;i++)
	{
		delete [] dp[i];
	}
	delete [] dp;
	return ans;

}



int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   char a[100];
   char b[100];

   cin>>a;
   cin>>b;
   cout<<lcsI(a,b)<<endl;
   cout<<lcs2(a, b)<<endl;
   cout<<LongestCommonSubsequence(a, b)<<endl;
   return 0;
}