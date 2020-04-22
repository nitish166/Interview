#include <bits/stdc++.h>
using namespace std;



void leftRotate(int* arr, int n)
{
	int temp = arr[0];
	int i;
	for(i=0; i<n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	// on last element we replace temp value
	arr[i] = temp;
}


void arrayRotate(int* arr, int d, int n)
{
	for(int i=0; i<d; i++)
	{
		leftRotate(arr, n);
	}
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int d;
	cin>>d;

	arrayRotate(arr, d, n);

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}



	// 2nd Method 

	// vector<int> ans;
	// for(int i=d; i<n; i++)
	// {
	// 	ans.push_back(arr[i]);
	// }

	// for(int i=0; i<d; i++)
	// {
	// 	ans.push_back(arr[i]);
	// }

	// for(int i=0; i<ans.size(); i++)
	// {
	// 	cout<<ans[i]<<" ";
	// }

	return 0;

}