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
   		int b;
   		cin>>b;

   		b=b-2;
   		b=b/2;
   		int ans = b*(b+1)/2;
   		cout<<ans<<endl;
   		
   }
        
        
 
   return 0;
}