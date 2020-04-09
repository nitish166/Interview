// Time Complexity: O(n)




#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


long countArray(int n, int k, int x)
{
	long oneCount = 1;
	long nonOneCount = 0;

	for(int i=1; i<n; i++)
	{
		long prevOneCount = oneCount;
		oneCount = (nonOneCount*(k-1))%mod;
		nonOneCount = (prevOneCount + ((nonOneCount)*(k-2))%mod)%mod;
	}

	if(x==1)
	{
		return oneCount;
	}
	else
	{
		return nonOneCount;
	}
}

 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   
   long n,k,x;
   cin>>n>>k>>x;
   long ans = countArray(n, k, x);
   cout<<ans<<endl;
   return 0;
}