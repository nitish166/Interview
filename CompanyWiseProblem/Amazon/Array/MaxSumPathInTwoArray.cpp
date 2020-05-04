#include <bits/stdc++.h>
using namespace std;


// Time complexity : O(n+m) (Why: There are total m+n elements)


int max_path_sum(int* A, int* B, int l1, int l2)
{
	int result=0;
	int sum1=0, sum2=0;
	int i=0, j=0;
	while(i<l1 && j<l2)
	{
		if(A[i]<B[j])
		{
			sum1 +=A[i++];
		}
		else if(B[j]<A[i])
		{
			sum2 +=B[j++];
		}
		else // we reached a common point
		{
			result += max(sum1, sum2);
			// update sum1 and sum2 for elements after this
			// intersection point
			sum1 =0, sum2=0;
			// Keep updating result while there are more 
			// common elements
			while(i<l1 && j<l2 && A[i]==B[j])
			{
				result = result + A[i++];
				j++;
			}		
		}		
	}

	// Add remaining elements of A[]
	while(i<l1)
	{
		sum1 +=A[i++]; 
	}

	// Add remaining elements of B[]
	while(j<l2)
	{
		sum2 +=B[j++];
	}

	// Add maximum of two sum in remaming elements
	result += max(sum1, sum2);
	return result;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int* arr1 = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		int* arr2 = new int[m];
		for(int i=0;i<m;i++)
		{
			cin>>arr2[i];
		}

		 int res = max_path_sum(arr1, arr2, n, m);
		 cout<<res<<endl;
		//cout<<"Hello"<<endl;
	}
}