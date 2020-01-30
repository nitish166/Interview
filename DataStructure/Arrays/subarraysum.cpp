// subarry with given sum problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		int start=0;
		int last=0;
		unsigned long long currsum =0;
		bool flag = false;

		for(int i=0;i<n;i++)
		{
			currsum +=arr[i];

			if(currsum>=k)
			{
				last=i;
				while(k<currsum && start<last)
				{
					currsum -=arr[start];
					++start;
				}

				if(k==currsum)
				{
					cout<<start+1<<" "<<last+1<<endl;
					flag=true;
					break;
				}
			}
		}

		if(flag==false)
		{
			cout<<"-1"<<endl;
		}


	}
	return 0;
}