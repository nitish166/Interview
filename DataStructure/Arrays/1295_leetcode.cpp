// find numbers with even numbers of digits


#include <bits/stdc++.h>
using namespace std;

int findNumbers(int nums[], int n)
{
	int ans=0;
	for(int i=0;i<n; i++)
	{
		int temp = nums[i];
		int count=0;
		while(temp !=0)
		{
			temp = temp/10;
			count++;
		}

		if(count%2==0)
		{
			ans++;
		}
	}
	return ans;
}



int main()
{
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}

	int digit = findNumbers(nums, n);
	cout<<digit<<endl;
	return 0;
}