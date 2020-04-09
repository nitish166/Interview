#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
// int main()
// {
 
//    ios_base:: sync_with_stdio(false); cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//    		int n;
//    		cin>>n;
//    		int count=0;
//    		while(n !=0)
//    		{
//    			if(n%2 !=0)
//    			{
//    				n=n-1;
//    				count++;
//    			}
//    			else if(n%2 ==0)
//    			{
//    				n=n/2;
//    				count++;
//    			}
//    		}
//    		cout<<count<<endl;
//    }

//    return 0;
// }

int arr[10001]={0};


int FindMinOperation(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	if(arr[n]>0)
	{
		return arr[n];
	}
	int ans = min(FindMinOperation(n-1)+1, FindMinOperation(n/2)+n%2+1);
	arr[n] = ans;
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans = FindMinOperation(n);
		cout<<ans<<endl;
	}
	return 0;
}