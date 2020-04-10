#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;


// Time Complexity : O(m*n)

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

// In this solution, we converted string to char array after that apply same concept 

int lcs(string s1, string s2){

   	int m = s1.size();
   	int n = s2.size();

   	char a[m+1];
   	char b[n+1];
   	strcpy(a, s1.c_str());
   	strcpy(b, s2.c_str());
   
    int** dp = new int*[m+1];
    for(int i=0;i<=m; i++)
    {
        dp[i] = new int[n+1];
        for(int j=0; j<=n; j++)
        {
            dp[i][j] = -1;
        }
    }
    int ans = lcs2Helper(a, b, m, n, dp);
    for(int i=0; i<m; i++)
    {
        delete [] dp[i];
    }
    delete [] dp;
    return ans;
}

int main(){

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << lcs(s1,s2) << endl;

}