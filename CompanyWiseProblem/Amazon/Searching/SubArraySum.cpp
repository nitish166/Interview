#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n^2)
// Space complexity: O(1)

// void subArraySum(int* arr, int n, int s)
// {
// 	bool temp=false;
//     int ans =0;
//     int indx1=0, indx2=0;
//     for(int i=0; i<n; i++)
//     {
//         ans=0;
//         for(int j = i+1; j<n; j++)
//         {
//             ans +=arr[j];
//             if(arr[i]+ans==s)
//             {
//                 temp = true;
//                 cout<<i+1 <<" "<<j+1;
//                 break;
//             }
//         }
//         if(temp==true)
//         {
//             break;
//         }    
//     }
    
//     if(temp!=true)
//     {
//        cout<<"-1";
//     }
// }



void subArraySum(int* arr, int n, int s)
{
	int start=0, last=0;
	int cuursum=arr[0];
	bool temp = false;
	for(int i=1; i<=n; i++)
	{
		while(cuursum>s && start<i-1)
		{
			cuursum = cuursum - arr[start];
			start++;
		}

		if(cuursum==s)
		{
			last=i-1;
			temp = true;
			break;
		}

		if(i<n)
		{
			cuursum +=arr[i];
		}

	}
	if(temp==true)
	{
		cout<<start+1<<" "<<last+1;
	}
	else
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