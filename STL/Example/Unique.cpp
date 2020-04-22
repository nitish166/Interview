#include <bits/stdc++.h>
using namespace std;


int FindUniqueElement(int* arr, int size)
{
	map<int, int> m;
	for(int i=0; i<size; i++)
	{
		m[arr[i]]++;
	}

	map<int, int> :: iterator it;
	for( it= m.begin(); it!=m.end(); it++)
	{
		if(it->second==1)
		{
			return it->first;
		}
	}
	return -1;
}



int main()
{


	// array size should be : 2*n+1

	int n;
	cin>>n;
	int size = n;
	int* arr = new int[size];
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	int ans= FindUniqueElement(arr, size);
	cout<<ans<<endl;
	return 0;
}