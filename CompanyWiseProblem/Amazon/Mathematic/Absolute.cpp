#include <bits/stdc++.h>
using namespace std;

int absolute(int I)
{
	return abs(I);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<< absolute(n)<<endl;
	}
	return 0;
}