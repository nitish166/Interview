#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;



// using brute force 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   string s;
   cin>>s;
   int cnt1=0, cnt2=0, cnt3=0;
   for(int i=0;i<s.size();i++)
   {
   		if(s[i]=='a')
   		{
   			cnt1++;
   		}
   		else if(s[i]=='s')
   		{
   			cnt2++;
   		}
   		else if(s[i]=='p')
   		{
   			cnt3++;
   		}
   } 
   cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
   
        
        
 
   return 0;
}


// using map
// int main()
// {
//     int n;
//     cin>>n;
//     string st;
//     cin>>st;
//     int i=0;
//     map<char, int>m;
//     for(i=0;i<n;i++)
//     {
//         m[st[i]]++;
//     }
//     cout<<m['a']<<" "<<m['s']<<" "<<m['p']<<endl;
// }