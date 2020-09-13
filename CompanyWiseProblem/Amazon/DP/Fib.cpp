#include <bits/stdc++.h>
using namespace std;


// using DP
int fib(int n, int* arr)
{
	if(n==0 || n==1)
	{
		return n;
	}
	if(arr[n]!=0)
	{
		return arr[n];
	}
	int res = fib(n-1, arr) + fib(n-2, arr);
	arr[n] = res;
	return res;
}

// fib
// int fib(int n)
// {
// 	if(n==0 || n==1)
// 	{
// 		return n;
// 	}
// 	int res = fib(n-1) + fib(n-2);
// 	return res;
// }

int main()
{
	
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=0; i<=n; i++)
		{
			arr[i]=0;
		}
		int ans = fib(n, arr);
		cout<<ans<<endl;
	
	return 0;
}