#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}

	return n*fact(n-1);
}

int main()
{
 
   	ios_base:: sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin>>n;
    if(n>=5)
    {
    	cout<<"0"<<endl;
    }
    else
    {
    	int ans = fact(n);
    	int res = ans%10;
    	cout<<res<<endl;
    }
    return 0;
}