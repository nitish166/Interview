// Time Complexity : O(n*2^n)
// Count total number of subset with sum k
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int CountSubset(int* arr, int n, int k)
{
	int count=0;
	for(int mask=0; mask<2^n-1; mask++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if((mask & (1<<j))!=0)
			{
				sum +=arr[j];
			}
		}
		if(sum==k)
		{
			count++;
		}
	}
	cout<<count<<endl;

	return count;
}


int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   // int n;
   // cin>>n;
   // int* arr = new int[n];
   // for(int i=0;i<n;i++)
   // {
   // 		cin>>arr[i];
   // }
   // int k;
   // cin>>k;
   int arr[] ={2,3,5};
   int k=5;
   int ans = CountSubset(arr, 3, k);
   cout<<ans<<endl;
   return 0;
}