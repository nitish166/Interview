#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] ={1,3,2,5,7,6};
	sort(arr, arr+6);
	for(int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	// index of number
	cout<<lower_bound(arr, arr+6, 7) -arr;
	cout<<endl;

	// index of just next number
	cout<<upper_bound(arr, arr+6, 3)-arr;
	cout<<endl;
	return 0;
}