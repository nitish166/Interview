#include <bits/stdc++.h>
using namespace std;


// Time Complexity: O(n)
// Space Complexity: O(1)
int Search(vector<int> vec, int K)
{
	int n = vec.size();
	bool temp = false;
	for(int i=0; i<n; i++)
	{
		if(vec[i]==K)
		{
			temp = true;
			return i;
			break;
		}
	}
	if(temp !=true)
	{
		return -1;
	}
}


// Implement using Binary Search

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec;
		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;
			vec.push_back(temp);
		}

		int target;
		cin>>target;
		cout<< Search(vec, target) <<endl;
	}
}