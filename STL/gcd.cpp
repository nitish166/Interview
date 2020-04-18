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
	cout<<__gcd(10,6)<<endl;
	return 0;
}