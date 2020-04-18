#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


vector<int> removeDuplicate(vector<int> input)
{
	sort(input.begin(), input.end());

	vector<int> result;

	result.push_back(input[0]);
	for(int i=1; i<input.size(); i++)
	{
		if(input[i] !=input[i-1])
		{
			result.push_back(input[i]);
		}
	}
	return result;

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