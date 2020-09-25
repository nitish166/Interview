#include <bits/stdc++.h>
using namespace std;

void printLeaders(int* arr, int n)
{
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(max);
    for(int i= n-2; i>=0; i--)
    {
        if(max<=arr[i])
        {
            max=arr[i];
            ans.push_back(max);
        }
    }
    
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
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
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    printLeaders(arr, n);
	    cout<<endl;
	}
	return 0;
}