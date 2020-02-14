// BinarySearch Program
// Time complexity : O(logn)

#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[], int k, int low, int high)
{
    if (high>=low)
    {
        // here mid we can also calculate using mid = (high-low)/2 but in this
        // case might be overflow condition occurs
        int mid = low + (high-low)/2;
        if(k==arr[mid])
        {
            return true;
        }
        else if(k < arr[mid])
        {
            return BinarySearch(arr, k, low, mid-1);
        }
        else
        {
            return BinarySearch(arr, k, mid+1, high);
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool flag =BinarySearch(arr, k, 0, n-1);
    if(flag==true)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}
