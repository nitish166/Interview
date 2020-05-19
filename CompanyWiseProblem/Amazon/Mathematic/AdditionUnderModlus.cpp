#include <bits/stdc++.h>
using namespace std;

int sumUnderModulo(long long a, long long b)
{
	int M = 1000000007;
	a %=M;
	b %=M;
	int sum = a+b;
	return sum%M;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a, b;
		cin>>a>>b;
		cout<< sumUnderModulo( a, b)<<endl;
	}
}