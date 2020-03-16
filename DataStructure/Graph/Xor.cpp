#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 

 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
    
   long long int t;
   cin>>t;
   while(t--)
   {
         long long int n,q;
         cin>>n>>q;
         long long int seq[n];
         long long int i;
         for( i=0;i<n;i++)
         {
            cin>>seq[i];
         }
         long long int even=0, odd=0;
         for( i=0;i<n;i++)
         {
             if(seq[i] &1 ==1)
             {
                odd++; 
             }
             else
             {
                 even++;
             }
         }
         long long int qur[q];
         for( i=0;i<q;i++)
         {
            cin>>qur[i];
         }
          
          for( i=0;i<q;i++)
          {
              bitset<32> b1(qur[i]);
              if(b1.test(1))
              {
                  cout<<even<<" ";
              }
              else
              {
                cout<<odd<<" ";
              }
              // if((qur[i]>>0) &1)
              // {
              //     cout<<even<<" ";
              // }
              // else
              // {
              //     cout<<odd<<" ";
              // }
          }

         
   }
        
        
 
   return 0;
}