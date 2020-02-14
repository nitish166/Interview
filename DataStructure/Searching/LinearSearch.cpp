// Program of linear Search
// Time complexity : O(n)


#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr, int k)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==k)
      return true;
  }
  return  false;
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
  bool flag = linearSearch(arr, k);
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
