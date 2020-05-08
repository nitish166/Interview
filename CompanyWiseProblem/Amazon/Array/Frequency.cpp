#include <bits/stdc++.h>
using namespace std;

void printFrequency(int* arr, int n)
{
	// Substract 1 from every element so that the elements
	// become in range from 0 to n-1
	for(int j=0; j<n; j++)
	{
		arr[j] = arr[j]-1;
	}

	// use every element arr[i] as index and add 'n' to
	// element present at arr[i]%n to keep track of count
	// of occurrences of arr[i]
	for(int i=0; i<n; i++)
	{
		arr[arr[i]%n] +=n; 
	}

	// To print counts, simply print number of times 
	// n was added at index corresponding to every element
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]/n<<" ";
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

		printFrequency(arr, n);
		cout<<endl;
	}
	return 0;
}