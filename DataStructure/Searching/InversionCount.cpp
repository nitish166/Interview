// Number of inversion count in array
// Time Complexity: O(n)

#include <iostream>
using namespace std;

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
	    
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=1; j<n; j++)
	        {
	            if(arr[i]>arr[j]  && i<j)
	            {
	                count++;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}