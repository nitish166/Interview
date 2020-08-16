#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   
   int n;
   cin>>n;
   vector<int> a(n+1);
   int i;
   for( i=1;i<=n; i++)
   {
     cin>>a[i];
   }
   int cnt, res=0;
   
   for(int j=1; j<=n; j++)
   {
   	 i = j;
   	 cnt=1;
   	 while(a[i]!=-1)
   	 {
   	 	i = a[i];
   	 	cnt++;
   	 }
   	 if(cnt>res)
   	 {
   	 	res=cnt;
   	 }
   }
   cout<<res<<endl;
   return 0;
}