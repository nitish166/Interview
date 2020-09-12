#include <bits/stdc++.h>
using namespace std;


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

int main()
{
	
		int n;
		cin>>n;
		int arr[n+1];
		int ans = fib(n, arr);
		cout<<ans<<endl;
	
	return 0;
}