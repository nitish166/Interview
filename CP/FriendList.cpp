#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[1001];
	for(int i=0; i<1001; i++)
	{
		arr[i] =0;
	}

    // incrementing the count of array element
	for(int i=0; i<n; i++)
	{
		int p1, p2;
		cin>>p1>>p2;
		arr[p1]++;
		arr[p2]++;
	}

	int max =0;
	for(int i=0; i<1001; i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
	}

	// whose player of this value of max

	for(int i=0; i<1001; i++)
	{
		if(arr[i] == max)
		{
			cout<< i << endl; 
		}
	}
	return 0;
}