#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int temp;
	while(t--)
	{
		int n;
		cin>>n;
		temp=0;
		while(n)
		{
			temp = temp*10 + (n%10);
			n /=10;
		}
		cout<<temp<<endl;
	}
	return 0;
}