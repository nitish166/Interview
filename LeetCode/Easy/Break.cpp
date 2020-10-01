#include <bits/stdc++.h>
using namespace std;


int countFib(int low, int high)
{
	int f1=0, f2=1, f3=1;
	int count=0;
	while(f1 <=high)
	{
		if(f1 >= low)
		count++;
		f1=f2;
		f2=f3;
		f3 = f1+f2;
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int low, high;
		cin>>low>>high;
		cout<<countFib(low, high)<<endl;
	}
	return 0;
}