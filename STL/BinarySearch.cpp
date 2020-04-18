// only applied on sorted array
// array should be shorted in acending order

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {1,3,2,5,7,6};
	sort(arr, arr+6);
	for(int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	cout<<binary_search(arr, arr+6, 2);
	cout<<endl;
	
	return 0;
}