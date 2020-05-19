#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


bool compare(pair<int, int> p1, pair<int, int> p2)
{
	// if frequency of two elements are same
	// then the larger number should come first
	if(p1.second == p2.second)
	{
		return p1.first > p2.first;
	}

	// sort on the basis of decreasing order 
	// of frequency
	return p1.second > p2.second;
}

vector<int> TopK(vector<int>& array, int k) 
{
    unordered_map<int, int> um; 
    for(int i=0; i<array.size(); i++)
    {
        um[array[i]]++;
    }
    
    // store the elements of 'um' in the vector 'freq_arr'
    vector<pair<int, int> > fre_arr(um.begin(), um.end());

    // sort the vector fre_arr on the basis of the compare function
    sort(fre_arr.begin(), fre_arr.end(), compare);

    vector<int> ans;

    for(int i=0; i<k; i++)
    {
    	ans.push_back(fre_arr[i].first);
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
		vector<int> array;
		for(int i=0; i<n; i++)
		{
			cin>>array[i];
		}
		int k;
		cin>>k;
		vector<int> ans = TopK(array, k);
		for(int i=0; i<n; i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
