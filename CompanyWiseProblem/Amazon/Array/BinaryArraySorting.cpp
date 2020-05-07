#include <bits/stdc++.h>
using namespace std;

vector<int> sortBinaryArray(vector<int> binArray);

// Time Complexity: O(nlogn)

vector<int> sortBinaryArray(vector<int> binArray)
{
	vector<int> ans;

	for(int i=0; i<binArray.size(); i++)
	{
		ans.push_back(binArray[i]);
	}

	sort(ans.begin(), ans.end());
}


int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		vector<int> binArray(n);

		for(int i=0; i<n; i++)
		{
			cin>>binArray[i];
		}

		vector<int> result = sortBinaryArray(binArray);
		for(int i=0; i<n; i++)
		{
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}