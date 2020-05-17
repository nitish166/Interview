#include <bits/stdc++.h>
using namespace std;


// Simple Approach
// Time Complexity: O(sqrt(n))
// Space complexity: O(1)
long long int floorSqrt(long long int x)
{
	// Base Cases
	if( x ==0 || x ==1)
	{
		return x;
	}

	// starting from 1, try all numbers until
	// i*i is greater than or equal to x.
	int i=1, result =1;
	while(result <=x)
	{
		i++;
		result =i*i;
	}
	return i-1;
}

// Efficent Solution
// Time Complexity: log(n)
// Space Complexity: O(1)
long long int floorSqrt(long long int x)
{
	// Base case
	if(x==0 || x==1)
	{
		return x;
	}

	long long int start =1, end =x, ans;

	while(start <=end)
	{
		long long int mid = (start+end) / 2;

		// if x is perfect square
		if(mid*mid == x)
		{
			return mid;
		}

		if(mid*mid <x)
		{
			start = mid+1;
			ans = mid;
		}
		else
		{
			end = mid-1;
		}
	}
	return ans;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x;
		cin>>x;
		cout<< floorSqrt(x)<<endl;
	}
}