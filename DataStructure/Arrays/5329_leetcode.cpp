#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int removeDuplicate(int input[], int n)
{
	set<int> s;
	vector<int> result;

	for(int i=0;i<n;i++)
	{
		if(s.find(input[i])==s.end())
		{
			s.insert(input[i]);
			result.push_back(input[i]);
		}
	}
	int temp = result.size();
	if(temp==1)
	{
		return temp;
	}
	temp = floor(temp/2);
	return temp;
}




int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int res = removeDuplicate(arr, n);
	cout<<res<<endl;
	return 0;
}