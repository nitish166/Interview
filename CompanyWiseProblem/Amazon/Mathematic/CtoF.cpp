#include <bits/stdc++.h>
using namespace std;

double cToF(int C)
{
	double F = C*9/5 +32;
	return F;
}

int main()
{
	int T; // numbers of testcases
	cin>>T; // input numbers of test cases
	while(T--)
	{
		int C;
		cin>>C; // input temperature in celsicius
		cout<< floor(cToF(C)) <<endl; // print the output
	}
	return 0;
}