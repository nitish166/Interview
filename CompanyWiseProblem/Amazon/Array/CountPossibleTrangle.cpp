#include <bits/stdc++.h>
using namespace std;
long long arr[10000000];



// Brute Froce Approch
// Time Complexity: O(n*n*n)


int findPossibleTrangle(long long size)
{
	long long i, j, k;
	int count=0;

	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			for(k=j+1; k<size; k++)
			{
				if(arr[i]+arr[j]>arr[k] && arr[j]+arr[k]>arr[i] && arr[k]+arr[i]>arr[j])
				{
					count++;
				}
			}
		}
	}
	return count;
}

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long size;
		cin>>size;
		for(int i=0; i<size; i++)
		{
			cin>>arr[i];
		}
		cout<<findPossibleTrangle(size)<<endl;
	}
	return 0;
}