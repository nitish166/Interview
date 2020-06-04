#include <bits/stdc++.h>
using namespace std;




// Time Complexity: O(n*n)

long long int countSubarrWithEqualZeroAndOne(int* arr, int n)
{
	int sum=0;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			arr[i]=-1;
		}
	}

	for(int i=0;i<n;i++)
	{
		sum=arr[i];
		for(int j=i+1;j<n;j++)
		{
			sum +=arr[j];
			if(sum==0)
			{
				cnt++;
			}
		}
	}

	return cnt;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		cout<<countSubarrWithEqualZeroAndOne(arr, n)<<endl;
	}
}