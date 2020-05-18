#include<bits/stdc++.h>
using namespace std;


void merge(int* arr, int l, int m, int r)
{
	int i, j, k;
	int n1 = m-l+1;
	int n2 = r-m;

	// create temp arrays

	int L[n1], R[n2];

	// copy data to temp arrays 
	for( i=0; i<n1; i++)
	{
		L[i] = arr[l+i];
	}

	for( j=0; j<n2; j++)
	{
		R[j] = arr[m+1+j];
	}

	// merge the temp arrays back into arr[l----r]

	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// copy the remaining elements of L[], if there are any
	while(i<n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// copy the remaining elements of R[], if there are any
	while(j<n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}

}


void mergeSort(int* arr, int l, int r)
{
	if(l<r)
	{
		// same as (l+r)/2 but avoids overflow for
		// large l and h
		int m = l + (r-l)/2;

		// sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}
void segragate012(int* arr, int n)
{
    //Your code here
   mergeSort(arr, 0, n-1);
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
		segragate012(arr, n);
		for(int i=0; i<n; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}