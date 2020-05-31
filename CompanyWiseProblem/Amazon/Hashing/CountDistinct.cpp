#include <bits/stdc++.h>
using namespace std;


void countDistinct(int n, int k, int* arr)
{
	// creates an empty hashmap
	map<int, int> m;
	int cnt=0;
	for(int i=0; i<k; i++)
	{
		if(m[arr[i]]==0)
		{
			cnt++;
		}

		m[arr[i]]++;
	}

	cout<<cnt<<" ";

	for(int i=k; i<n; i++)
	{
		// remove first element of previous window
		// if there was only one occurrence, then reduce distinct element

		if(m[arr[i-k]] ==1)
		{
			cnt--;
		}

		// reduce cnt of the removed element

		m[arr[i-k]] -=1;

		// Add new element of current window
		// if this element appears first time
		// increment distinct element count

		if(m[arr[i]] ==0)
		{
			cnt++;
		}

		m[arr[i]] +=1;
		cout<<cnt<<" ";
	}
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
		countDistinct(n,k,arr);
		cout<<endl;
	}
	return 0;
}