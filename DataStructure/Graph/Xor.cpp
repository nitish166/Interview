#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 


void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
    
   int t;
   cin>>t;
   while(t--)
   {
   		int n,q;
   		cin>>n>>q;
   		int seq[n];
   		for(int i=0;i<n;i++)
   		{
   			cin>>seq[i];
   		}
         int even=0 ,odd=0;
         for(int i=0;i<n;i++)
         {
            if(seq[i] &1)
            {
               odd++;
            }
            else
            {
               even++;
            }
         }
   		int qur[q];
   		for(int i=0;i<q;i++)
   		{
   			cin>>qur[i];
   		}
   	
   		for(int i=0; i<q; i++)
         {
            if((qur[i]>>0) & 1)
            {
               swap(even, odd);
            }
         }
   		
   		cout<<even<<" "<<odd<<endl;
   }
        
        
 
   return 0;
}