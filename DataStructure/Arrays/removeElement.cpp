#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int count=0;
    int val=2;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==val)
      {
        count++;
      }
    }
    int res=n-count;
    cout<<res<<endl;
    return 0;
}
