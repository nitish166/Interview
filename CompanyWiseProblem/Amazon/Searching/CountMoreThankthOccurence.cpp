#include <bits/stdc++.h>
using namespace std;


// Time complexity: O(n)
int countOccurence(int* arr, int n, int k)
{
	int ans = n/k;
    int cnt=0;
    map<int, int> m;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    
    map<int, int> :: iterator it;
    
    for(it = m.begin(); it!=m.end(); it++)
    {
        if(it->second>ans)
        {
            cnt++;
        }
    }
    return cnt;
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
		int k;
		cin>>k;

		int ans = countOccurence(arr, n, k);
		cout<<ans<<endl;
	}
	return 0;
}