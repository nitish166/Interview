#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int helpTheif(int* arr, int n)
{
    int dp[n];
    dp[0] =arr[0];
    dp[1] = max(arr[0], arr[1]);
    for(int i=2; i<n; i++)
    {
        int test1 = arr[i]+dp[i-2];
        int test2 = dp[i-1];
        dp[i] = max(test1, test2);
    }
    return dp[n-1];
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int ans = helpTheif(arr, n);
	    cout<<ans<<endl;
	}
	return 0;
}