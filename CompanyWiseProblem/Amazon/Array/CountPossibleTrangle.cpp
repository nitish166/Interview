#include <bits/stdc++.h>
using namespace std;
long long arr[10000000];



// Brute Froce Approch
// Time Complexity: O(n*n*n)


int findPossibleTrangle(long long size)
{
	long long i, j, k;
	int count=0;

	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			for(k=j+1; k<size; k++)
			{
				if(arr[i]+arr[j]>arr[k] && arr[j]+arr[k]>arr[i] && arr[k]+arr[i]>arr[j])
				{
					count++;
				}
			}
		}
	}
	return count;
}

// Two pointer approch
// Time Complexity: O(n*n)


int findPossibleTrangle(long long size)
{
	int count=0;
    sort(arr, arr+n);
    
    for(int i=n-1; i>=1; i--)
    {
        int l = 0;
        int r = i-1;
        while(l<r)
        {
            if(arr[l]+arr[r]>arr[i])
            {
                count += r-l;
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return count;
}






int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long size;
		cin>>size;
		for(int i=0; i<size; i++)
		{
			cin>>arr[i];
		}
		cout<<findPossibleTrangle(size)<<endl;
	}
	return 0;
}