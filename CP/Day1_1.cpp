#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
    	int m, n;
    	cin>>m>>n;
    	int sum=m+n;


    	int new_sum=sum;
    	int x=n;

    	int count = 0; 
    	while (sum != 0) { 
        	sum = sum / 10; 
        	count++; 
    	} 

    	int count1=0;
    	while(n!=0)
    	{
    		n = n/10;
    		count1++;
    	}

    	if(count==count1)
    	{
    		cout<<x<<endl;
    	}
    	else
    	{
    		cout<<new_sum<<endl;
    	}

    }
   
        
        
 
   return 0;
}