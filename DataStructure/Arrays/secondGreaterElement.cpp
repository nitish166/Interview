#include<bits/stdc++.h>
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

	if(n<2)
	{
		return -1;
	}

	int first=INT_MIN, second =INT_MAX;
	// for(int i=0;i<n;i++)
	// {
	// 	if(arr[i]>first)
	// 	{
	// 		second=first;
	// 		first=arr[i];
	// 	}
	// 	else if(arr[i]>second && arr[i] !=first)
	// 	{
	// 		second = arr[i];
	// 	}
	// }

	for(int i=0;i<n;i++)
	{
		if(arr[i]>first)
		{
			second=first;
			first=arr[i];

		}
	}

	//cout<<first<<endl;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==first)
		{
			continue;
		}
		if(arr[i]>second)
		{
			second=arr[i];
		}
	}
	cout<<second<<endl;

	// if(second==INT_MIN)
	// {
	// 	return -1;
	// }
	// else
	// {
	// 	cout<<second<<endl;
	// }
return 0;
}