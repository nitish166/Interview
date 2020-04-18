#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


vector<int> removeDuplicate(vector<int> input)
{
	set<int> s;
	vector<int> ans;
	for(int i=0; i<input.size(); i++)
	{
		// checked if element is not present in set 
		if(s.find(input[i]) ==s.end())
		{
			s.insert(input[i]);
			ans.push_back(input[i]);
		}
	}
	return ans;
}

 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int n;
   cin>>n;
   vector<int> ans;
   for(int i=0;i<n;i++)
   {
   		int input;
   		cin>>input;
   		ans.push_back(input);
   }
   
   vector<int> result =removeDuplicate(ans);
   for(int i=0;i<result.size();i++)
   {
   		cout<<result[i]<<" ";
   }    
   return 0;
}