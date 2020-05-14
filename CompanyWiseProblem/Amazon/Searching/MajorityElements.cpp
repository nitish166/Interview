#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    
    // your code here
    map<int, int> m;
    for(int i=0; i<size; i++)
    {
        m[a[i]]++;
    }
    bool temp = false;
    map<int, int>:: iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        if(it->second>size/2)
        {
            temp = true;
            return it->first;
        }
    }
    if(temp==false)
    {
        return -1;
    }
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends