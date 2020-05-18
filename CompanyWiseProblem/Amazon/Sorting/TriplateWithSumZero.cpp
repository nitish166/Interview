#include<bits/stdc++.h>
using namespace std;

bool TriplateWithSumZero(int* arr, int n)
{
	sort(arr, arr+n);
    bool temp = false;
    for(int i=0; i<n-1; i++)
    {
        int l = i+1;
        int r = n-1;
        int x = arr[i];
        while(l<r)
        {
            if(x+arr[l]+arr[r]==0)
            {
                l++;
                r--;
                temp = true;
            }
            else if(x+arr[l]+arr[r]<0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    if(temp==true)
    {
        return true;
    }
    else
    {
        return false;
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

		bool ans = TriplateWithSumZero(arr, n);
		cout<<ans<<endl;
	}
}