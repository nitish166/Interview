#include <bits/stdc++.h>
using namespace std;


int Chair(int n, int* arr, int* dep)
{
	sort(arr, arr+n);
	sort(dep, dep+n);

	int chair_required=1, result=1;

	int i=1, j=0;

	while(i<n && j<n)
	{
		if(arr[i] <=dep[j])
		{
			chair_required++;
			i++;

			if(chair_required>result)
			{
				result=chair_required;
			}
		}
		else
		{
			chair_required--;
			j++;
		}
	}
	return result;
}



int main()
{
	int n;
	cin>>n;
	int arr[n], dep[n];

	// Arrival time
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	// Departure time
	for(int i=0; i<n; i++)
	{
		cin>>dep[i];
	}

	cout<<Chair(n, arr, dep)<<endl;
	return 0;
}