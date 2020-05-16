#include <bits/stdc++.h>
using namespace std;

void subArraySum(int* arr, int n, int s)
{
	bool temp=false;
    int ans =0;
    int indx1=0, indx2=0;
    for(int i=0; i<n; i++)
    {
        ans=0;
        for(int j = i+1; j<n; j++)
        {
            ans +=arr[j];
            if(arr[i]+ans==s)
            {
                temp = true;
                cout<<i+1 <<" "<<j+1;
                break;
            }
        }
        if(temp==true)
        {
            break;
        }    
    }
    
    if(temp!=true)
    {
       cout<<"-1";
    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		subArraySum(arr, n, s);
		cout<<endl;
	}
	return 0;
}