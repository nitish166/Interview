#include <bits/stdc++.h>
using namespace std;

int minDis(int* arr, int n, int x, int y)
{
		int pre_index =-1;
		int min_dis = INT_MAX;
		for(int i=0; i<n;i++)
		{
			if(arr[i]==x || arr[i]==y)
			{
				if(pre_index !=-1 && arr[i] !=arr[pre_index])
				{
					min_dis = min(min_dis, i-pre_index);
				}

				// update the previous index
				pre_index=i;
			}
		}

		// if distance is equal to int max

		if(min_dis == INT_MAX)
		{
			return -1;
		}

		return min_dis;

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
		int x, y;
		cin>>x>>y;
		int ans =minDis(arr, n, x, y);
		cout<<ans<<endl;
	}
	return 0;
}