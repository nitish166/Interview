#include <bits/stdc++.h>
#include <unordered_map>
#include <math.h>
using namespace std;

vector <int> findPairs(int arr[], int n) 
{
    vector<int> ans;
	vector<int> v; 
    unordered_map<int, bool> cnt; 
  
    // For each element of array. 
    for (int i = 0; i < n; i++) { 
  
        // If element has not encounter early, 
        // mark it on cnt array. 
        if (cnt[abs(arr[i])] == 0) 
            cnt[abs(arr[i])] = 1; 
  
        // If seen before, push it in vector ( 
        // given that elements are distinct) 
        else { 
            v.push_back(abs(arr[i])); 
            cnt[abs(arr[i])] = 0; 
        } 
    } 
  
    for(int i=0; i<v.size(); i++)
    {
        ans.push_back(-v[i]);
        ans.push_back(v[i]);
    }

    return ans;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		vector<int> res = findPairs(arr, n);
		if(res.size()!=0)
		{
			for(int i : res)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}