#include <bits/stdc++.h>
using namespace std;


// void MaxAndSecMax(int* arr, int n)
// {
// 	sort(arr, arr+n, greater<int>());

// 	set<int> s;
// 	vector<int> ans;
// 	for(int i=0; i<n;i++)
// 	{
// 		if(s.find(arr[i]) ==s.end())
// 		{
// 			s.insert(arr[i]);
// 			ans.push_back(arr[i]);
// 		}
// 	}

// 	int smax = INT_MIN;
// 	int fmax = INT_MIN;

// 	fmax = ans[0];
// 	smax = ans[1];

// 	if(ans.size()<2)
// 	{
// 		smax =-1;
// 	}

	
// 	cout<<fmax<<" "<<smax<<endl;
// }


// 2nd method


void MaxAndSecMax(int* arr, int n)
{
	int max = INT_MIN, max2 = INT_MIN;

	// iterating through the array and and comparing the elements
	// to find max and second max
	for(int i=0; i<n; i++)
	{
		// if current element is greater than max
		// update max
		if(arr[i]>max)
		{
			max2 = max;
			max = arr[i];
		}

		// if current element is greater than max
		// update the max
		else if(arr[i]>max2 && arr[i] !=max)
		{
			max2 = arr[i];
		}
	}

	// if no max2 exists, assign max2 as -1

	if(max2 == INT_MIN)
	{
		max2 -1;
	}

	cout<< max <<" "<<max2<<endl;
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