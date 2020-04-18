#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] ={1,3,2,5,7,6};
	// Asending order
	sort(arr, arr+6);

	// Decending order
	sort(arr, arr+6, greater<int>());
	for(int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}