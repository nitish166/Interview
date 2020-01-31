// used for searching pairs in sorted array
//The algorithm basically uses the fact that the input array is sorted
// we start the sum of extreme values (smallest and largest) and conditionally move both pointers we move left pointer i when the sum 
//of A[i] and A[j] is less than x. we do not miss any pair because the sum is already smaller than x. same logic 
// applies for right pointer j

#include <bits/stdc++>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int i=0;
	int j=n-1;
	bool flag=false;

	while(i<j)
	{
		if(arr[i]+arr[j]==s)
		{
			flag=true;
		}
		else if(arr[i]+arr[j]<s)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	if(flag==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
} 