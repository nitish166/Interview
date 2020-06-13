#include <bits/stdc++.h>
using namespace std;


void SortAnArray012(int* arr, int n)
{
	int cnt1=0, cnt2=0, cnt3=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==0)
		{
			cnt1++;
		}
		if(arr[i]==1)
		{
			cnt2++;
		}
		if(arr[i]==2)
		{
			cnt3++;
		}
	}

	int i=0;
	while(cnt1!=0)
	{
		arr[i++]=0;
		cnt1--;
	}

	while(cnt2!=0)
	{
		arr[i++]=1;
		cnt2--;
	}

	while(cnt3!=0)
	{
		arr[i++]=2;
		cnt3--;
	}

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
		int* arr = new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		SortAnArray012(arr, n);
		cout<<endl;
	}
}