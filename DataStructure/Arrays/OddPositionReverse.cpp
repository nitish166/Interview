#include <bits/stdc++.h>
using namespace std;


void reverseOddPostionElement(int* arr, int n)
{
	vector<int> ans1;
	for(int i=1; i<n; i +=2)
	{
		ans1.push_back(arr[i]);
	}

	reverse(ans1.begin(), ans1.end());

	for(int i=1; i<n; i+=2)
	{
		arr[i] =0;
	}
	
	int k=0;
	for(int i=1; i<n; i+=2)
	{
		arr[i] = ans1[k];
		k++;
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
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

	reverseOddPostionElement(arr, n);
	cout<<endl;
	return 0;
}