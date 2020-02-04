#include <bits/stdc++.h>
using namespace std;

int findEquilibrumPoint(int arr[], int n)
{
    int leftsum=0;
    int rightSum=0;
    for(int i=0;i<n;i++)
    {
        rightSum +=arr[i];
    }
    
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        rightSum -=arr[i];
        if(leftsum==rightSum)
        {
            ans = i+1;
        }
        leftsum +=arr[i];
    }
    if(ans==0)
    {
        return -1;
    }
    
    return ans;
}



int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int index = findEquilibrumPoint(arr, n);
	    cout<<index<<endl;
	}
	return 0;
}