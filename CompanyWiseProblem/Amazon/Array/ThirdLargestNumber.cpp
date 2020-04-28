#include <bits/stdc++.h>
using namespace std;

long long thirdLargest(long long a[], long long n);



long long thirdLargest(long long a[], long long n)
{
	if(n<3)
	{
		return -1;
	}

	sort(a, a+n, greater<long long>());
	return a[2];
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			cout<<thirdLargest(a,n)<<endl;
		}
	}
}