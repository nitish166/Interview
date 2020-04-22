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
	int x;
	cin>>x;
	sort(arr, arr+n);
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n-1; j++)
		{
			for(int k=0; k<n-2; k++)
			{
				if(arr[i]+arr[j]+arr[k]==x)
				{
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				}
			}
		}
	}
	return 0;
}