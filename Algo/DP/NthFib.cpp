// Find Nth Fibonacci Number using DP
// Time Complexity : 
// Space Complexity: 

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int arr[1001];
int fib(int n, int* arr)
{
	if(n==1)
	{
		return 1;
	}
	if(n==0)
	{
		return 0;
	}

	if(arr[n]>0)
	{
		return arr[n];
	}

	int output = (fib(n-1, arr) + fib(n-2, arr))%mod;
	arr[n] = output;
	return output;
}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   		int n;
   		cin>>n;
   		cout<<fib(n, arr)<<endl;
   }
   return 0;
}