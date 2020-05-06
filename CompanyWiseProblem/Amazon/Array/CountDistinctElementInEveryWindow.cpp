#include <bits/stdc++.h>
using namespace std;



void countDistinct(int* arr, int k, int n)
{
	int count;
	int p=k;
	for(int i=0; i<k; i++)
	{
		count=0;
		int j;
		for( j=i; j<p; j++)
		{
			int m;
			for(m=0; m<j; m++)
			{
				if(arr[j]==arr[m])
				{
					break;
				}
			}
			if(j==m)
			{
				count++;
			}
		}
		p++;
		
		cout<<count<<" ";
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		countDistinct(arr, k, n);
		cout<<endl;
	}
	return 0;
}