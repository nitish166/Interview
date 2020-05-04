#include <bits/stdc++.h>
using namespace std;



// Bruite Force Solution
// Time Complexity: O(n^2)

int maxLen(int* arr, int n)
{
	int count=0;

	for(int i=0; i<n; i++)
	{
		int sum=0;
		for(int j=i; j<n; j++)
		{
			sum += arr[j];
			if(sum==0)
			{
				count = max(count, j-i+1);
			}
		}
	}
	return count;
}







int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}

		int ans = maxLen(arr, size);
		cout<<ans<<endl;
	}
}