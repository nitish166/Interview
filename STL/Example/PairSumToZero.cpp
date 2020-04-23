// TimeComplexity: (n*n)(logn)

#include <bits/stdc++.h>
using namespace std;

int PairSum(int* input, int n)
{
	sort(input, input+n);

	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(input[i]+input[j]==0)
			{
				cout<<input[i]<<" "<<input[j]<<endl;
			}
		}
	}
}

int main()
{
	int n;
	int arr[100000];
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	PairSum(arr, n);
	return 0;
}