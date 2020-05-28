#include <bits/stdc++.h>
using namespace std;

void tailoringZero(long long n)
{
	long long count=0;
	for(int i=5; n/i>=1; i*=5)
	{
		count +=n/i;
	}
	cout<<count<<endl;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		tailoringZero(n);
		cout<<endl;
	}
	return 0;
}