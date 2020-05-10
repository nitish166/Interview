#include <bits/stdc++.h>
using namespace std;
int NumberofElementsInintersection(int a[], int b[], int n, int m);

// int NumberofElementsInintersection(int a[], int b[], int n, int m)
// {
// 	set<int> s, s2;
// 	for(int i=0; i<n; i++)
// 	{
// 		s.insert(a[i]);
// 	}

// 	for(int i=0; i<m; i++)
// 	{
// 		s2.insert(b[i]);
// 	}

// 	int count =0;

// 	set<int>:: iterator it;
// 	set<int>:: iterator it1;

// 	for(it= s.begin();  it!=s.end(); it++)
// 	{
// 		for(it1 = s2.begin(); it1!= s2.end(); it1++)
// 		{
// 			if(*it==*it1)
// 			{
// 				count++;
// 			}
// 		}
// 	}
// 	return count;
// }





int NumberofElementsInintersection(int a[], int b[], int n, int m)
{
	map<int, int> mp1, mp2;

	for(int i=0; i<n; i++)
	{
		mp1[a[i]]++;
	}

	for(int i=0; i<m; i++)
	{
		if(mp1.count(b[i]))
		{
			mp2[b[i]]++;
		}
	}
	return mp2.size();
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;

		int a[n], b[m];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<m; i++)
		{
			cin>>b[i];
		}

		cout<< NumberofElementsInintersection(a,b,n,m)<<endl;
	}

	return 0;
}