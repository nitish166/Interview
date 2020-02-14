// Program of binary search using iterative solution
// Time complexity : O(logn)
#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[], int k, int low, int high)
{
    do{
        int mid = low + (high-low)/2;
        if(arr[mid]==k)
        {
            return true;
        }
        // if k is smaller than mid then ignore right part
        else if(arr[mid]>k)
        {
            high=mid-1;
        }
        // if k is bigger than mid ignore left part
        else
        {
            low = mid+1;
        }
    }while(low<=high);

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
