#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int even=0, odd =0;
	for(int i=0; i<n; i++)
	{
		if((arr[i]%2==0) && (i%2==0))
		{
			even +=arr[i];
		}
		else if((arr[i]%2!=0) && (i%2!=0))
		{
			odd +=arr[i];
		}
	}
	cout<<even<<" "<<odd<<endl;
	return 0;
}