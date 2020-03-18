#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define endl "\n"
int32_t main()
{
   // freopen("1.in","r",stdin);
   // freopen("1.out","w",stdout);
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
      int n,q;
      cin>>n>>q;
      int a[n];
      for(int i=0;i<n;i++)
         cin>>a[i];
      int odd=0,even=0;
      for(int i=0;i<n;i++)
      {
         int check=__builtin_popcount(a[i]);
         if( check%2==0)
            even++;
         else
            odd++;
      }
      while(q--)
      {
         int input;
         cin>>input;
         int odd1=odd,even1=even;
         int nodd=0,neven=0;
         int check1=__builtin_popcount(input);
         if(check1%2!=0)
         {
            
            odd1=even;
            even1=odd;
 
         }
         cout<<even1<<" "<<odd1<<endl;
      }
 
   }
   return 0;
}