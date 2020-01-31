#include <bits/stdc++.h>
using namespace std;

void triplate(int arr[], int n)
{
        sort(arr, arr+n);
        int count=0;
        for(int i=n-1; i>=0; i--)
        {
            int j=0;
            int k=i-1;
            while(j<k)
            {
                if(arr[j]+arr[k]==arr[i])
                {
                    count++;
                    j++;
                    k--;
                }
                else if(arr[j]+arr[k]<arr[i])
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }

        }
        if(count)
        {
            cout<<count<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
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
	    
	    //sort(arr, arr+n);
	    triplate(arr, n);
	    
	}
	return 0;
}