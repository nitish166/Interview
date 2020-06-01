#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


vector<int> countDistinct(int n, int k, int* arr)
{
	unordered_map<int, int> um;
	vector<int> res;

	// count number of distinct elements for first window
	for(int i=0; i<k; i++)
	{
		um[arr[i]]++;
	}
	res.push_back(um.size());

	// calculate answer for rest of the windows
	for(int i=1; i<n-k+1; i++)
	{
		um[arr[i-1]]--;
		if(um[arr[i-1]] <=0)
		{
			um.erase(arr[i-1]);
		}
		um[arr[i+k-1]]++;
		res.push_back(um.size());
	}
	return res;

}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		vector<int> ans =countDistinct(n,k,arr);
		for(int i=0; i<ans.size(); i++)
		{
			cout<<ans[i]<<" ";
		}
		
	}
	return 0;
}