// codeforces problem
// Concept : Array + Queue

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int ll;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int n, m;
   cin>>n>>m;
   ll arr[n];
   for(int i=0; i<n; i++)
   {
   		cin>>arr[i];
   } 
   sort(arr, arr+n);
   queue<ll> q;
   int count_m =0;
   int end_p =n-1;

   while(m--)
   {
   		int curr_m;
   		cin>> curr_m;
   		ll ans;
   		for(; count_m<curr_m; curr_m++)
   		{
   			if(end_p >=0 && (q.empty() || (arr[end_p] >= q.front())))
   			{
   				ans = arr[end_p];
   				end_p--;
   			}
   			else
   			{
   				ans = q.front();
   				q.pop();
   			}
   			q.push(ans/2);
   		}
   		cout<<ans<<endl;
   }
   // check
   cout<<ans<<endl;
   
   return 0;
}