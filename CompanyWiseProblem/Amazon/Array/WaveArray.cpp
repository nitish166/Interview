#include <bits/stdc++.h>
using namespace std;


// void swap(int* x, int* y )
// {
// 	int temp = *x;
// 	*x = *y;
// 	*y = temp;
// }


void convertToWave(int* arr, int n)
{
	sort(arr, arr+n);
	for(int i=0; i<n-1; i +=2)
	{
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}

	//  print element in wave form
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
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
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		convertToWave(arr, n);
		cout<<endl;
	}
}