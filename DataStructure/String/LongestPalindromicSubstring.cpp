// string->palindrome->O(n)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int lps(string s)
{
	int max =0;
	int n = s.length();
	for(int i=0; i<n; i++)
	{
		//odd length
		int l =i;
		int r =i;
		while(l>=0 && r<n && s[l] == s[r])
		{
			int curr_l = r-l+1;
			if(curr_l>max)
			{
				max = curr_l;
			}
			l--;
			r++;
		}

		//  Even Lenght
		 l =i;
		 r = i+1;

		while(l>=0 && r<n && s[l] == s[r])
		{
			int curr_l = r-l+1;
			if(curr_l>max)
			{
				max = curr_l;
			}
			l--;
			r++;
		}
	}
	return max;
}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   
   string s;
   cin>>s;
   cout<<lps(s) <<endl;
   return 0;
}