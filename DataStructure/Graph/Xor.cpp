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
   		int n,q;
   		cin>>n>>q;
   		int arr[n];
   		for(int i=0;i<n;i++)
   		{
   			cin>>arr[i];
   		}
   		int qur[q];
   		for(int i=0;i<q;i++)
   		{
   			cin>>qur[i];
   		}
   		int temp=0;
   		vector<int> ans;
   		for(int i=0;i<n;i++)
   		{
   			int temp=arr[i]^qur[i];
   			ans.push_back(temp);
   			temp=0;
   		}
   		int even=0, odd=0;
   		for(int i=0;i<ans.size();i++)
   		{
   			if(ans[i] &1)
   			{
   				odd++;
   			}
   			else
   			{
   				even++;
   			}
   		}
   		cout<<even<<" "<<odd<<endl;
   }
        
        
 
   return 0;
}