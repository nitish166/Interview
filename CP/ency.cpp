#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int i=0; i<q;i++)
	{
		int page;
		cin>>page;
		cout<<arr[page-1]<<endl;
	}
	return 0;
}