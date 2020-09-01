#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    bool flag = false;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]==1)
	        {
	            flag=true;
	            cout<<i<<endl;
	            break;
	        }
	    }
	    if(flag==false)
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}