#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int** arr = new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = new int[n];
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}


	long long int sum =0;
	// Base case
	if(n==1)
	{
		return arr[0][0];
	}
	// sum of elements of both diagonals and all boundaries
	for(int i=0; i<n; i++)
	{
		sum +=arr[0][i];
		sum +=arr[i][n-1];
		sum +=arr[i][0];
		sum +=arr[n-1][i];
		sum +=arr[i][i];
		sum +=arr[i][n-1-i];
	}
	// substracting all repeated value.
	sum -=(2*arr[0][0]);
	sum -=(2*arr[0][n-1]);
	sum -=(2*arr[n-1][0]);
	sum -=(2*arr[n-1][n-1]);
	// substract the middle repeted digonal element
    if(n%2==1)
    {
    	sum -=arr[(n-1)/2][(n-1)/2];
    }


	cout<<sum<<endl;

	return 0;

}