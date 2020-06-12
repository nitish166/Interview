#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

void printRepeating(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		if(arr[abs(arr[i])]>=0)
		{
			arr[abs(arr[i])] = -arr[abs(arr[i])];
		}
		else
		{
			cout<< abs(arr[i]) << " ";
		}
	}
}


// 2 Method
// Time Complexity: O(n)
// Space Complexity: O(1)
void printRepeating(int arr[], int n)
{
	// First check all the values that are
	// present in an array then go to that
	// values as indexes and increment by
	// the size of array
	for(int i=0; i<n; i++)
	{
		int index = arr[i]%n;
		arr[index] +=n;
	}

	// Now check which value exits mere 
	// than once by dividing with the size
	// of array

	for(int i=0; i<n; i++)
	{
		if((arr[i]/n)>1)
		{
			cout<<i<<" ";
		}
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
		printRepeating(arr, n);
		cout<<endl;
	}
}