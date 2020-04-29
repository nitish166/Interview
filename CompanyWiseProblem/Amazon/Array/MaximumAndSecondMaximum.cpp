#include <bits/stdc++.h>
using namespace std;


void MaxAndSecMax(int* arr, int n)
{
	sort(arr, arr+n, greater<int>());

	set<int> s;
	vector<int> ans;
	for(int i=0; i<n;i++)
	{
		if(s.find(arr[i]) ==s.end())
		{
			s.insert(arr[i]);
			ans.push_back(arr[i]);
		}
	}

	int smax = INT_MIN;
	int fmax = INT_MIN;

	fmax = ans[0];
	smax = ans[1];

	if(ans.size()<2)
	{
		smax =-1;
	}

	
	cout<<fmax<<" "<<smax<<endl;
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
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		MaxAndSecMax(arr, n);
		cout<<endl;
	}

	return 0;
}