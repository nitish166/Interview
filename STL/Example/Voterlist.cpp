#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;

int arr[500001];

int main()
{
	
 
   //ios_base:: sync_with_stdio(false); cin.tie(0);

 //    freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    
   int n1, n2, n3;
   cin>>n1>>n2>>n3;
   int num = n1+n2+n3;
   for(int i=0;i<num;i++)
   {
   		cin>>arr[i];
   }
   sort(arr, arr+num);
   map<int, int> m;
   for(int i=0;i<num;i++)
   {
   		m[arr[i]]++;
   }

   map<int, int>:: iterator it;

   int count=0;

   for(it=m.begin(); it!=m.end(); it++)
   {
   		if(it->second>=2)
   		{
   			count++;
   		}
   }
   cout<<count<<endl;
   for(it=m.begin(); it!=m.end(); it++)
   {
   		if(it->second>=2)
   		{
   			cout<<it->first<<endl;
   		}
   }
        
        
 
   return 0;
}