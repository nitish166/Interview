#include <bits/stdc++.h>
using namespace std;


// This solution will take huge amount of time to calculate Fibonacci Series :)

int Fib(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return Fib(n-1) + Fib(n-2);
}

// Shall take less time compare to first solution

int Fib2(int n, int* arr)
{
	if(n==0 || n==1)
	{
		return 1;
	}

	if(arr[n]>0)
	{
		return arr[n];
	}

	int output = Fib2(n-1, arr) + Fib2(n-2, arr);
	arr[n] = output;
	return output;

}


// Iterative solution

int fibi(int n)
{
	int* arr = new int[n+1];
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2; i<=n; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	int output = arr[n];
	delete[] arr;
	return output;
}


int main()
{
	int n;
	cin>>n;
	int ans = Fib(n);
	cout<<ans<<endl;
	return 0;
}