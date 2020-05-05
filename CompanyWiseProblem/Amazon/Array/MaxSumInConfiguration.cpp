#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b, a%b);
	}
}


void rotateArray(int* arr, int n, int d)
{
	d = d%n;
	int g_c_d = gcd(d,n);
	for(int i=0; i<g_c_d; i++)
	{
		int temp = arr[i];
		int j =i;
		while(true)
		{
			int k = j+d;
			if(k>=n)
			{
				k = k-n;
			}
			if(k==i)
			{
				break;
			}
			arr[j] = arr[k];
			j = k;

		}
		arr[j] = temp;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		vector<int> ans;
		int d=0;
		int sum=0;
		while(d<n)
		{
			rotateArray(arr, n, d);
			for(int i=0;i<n;i++)
			{
				sum +=arr[i]*i;
			}
			ans.push_back(sum);
			sum=0;
			d++;
		}
		sort(ans.begin(), ans.end(), greater<int>());

		cout<<ans[0]<<endl;
		// for(int i=0; i<ans.size(); i++)
		// {
		// 	cout<<i<<"  "<<ans[i]<<endl;
		// }
		
		
		cout<<endl;
	}
}