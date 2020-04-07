#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


int arr[1000001]; 

int stair(int n, int* arr)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	if(arr[n]>0)
	{
		return arr[n];
	}
	int output = (stair(n-1, arr) + stair(n-2, arr))%mod;
	arr[n] = output;
	return output;
}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   		int n;
   		cin>>n;
   		int ans = stair(n, arr);
   		cout<<ans<<endl;
   }

   return 0;
}