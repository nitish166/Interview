#include <bits/stdc++.h>
using namespace std;


// Time complexity: O(numberofdigitcount)
// digit count function
int digitCount(int n)
{
	int digitCount=0;
	// until n not become zero
	while(n!=0)
	{
		digitCount++;
		n /=10;
	}
	return digitCount;
}


// Time complexity: O(1)
int digitCount(int n)
{
	int k = floor(log10(n))+1;
	return k;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<digitCount(n)<<endl;
	}
}