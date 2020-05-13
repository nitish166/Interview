#include <bits/stdc++.h>
using namespace std;


vector<int> findTriplate(vector<int> ans, int n)
{

	vector<int> res;
	// create smaller array
	// first element = -1
	// smaller[i] = index of element smaller in the left side of array[i]
	// smaller[i] = -1 if no such element found

	int* smaller = new int[n];
	int min = 0;
	smaller[0] =-1;

	for(int i=1; i<n; i++)
	{

		if(ans[i]  <= ans[min])
		{
			min =i;
			smaller[i] = -1;
		}
		else
		{
			smaller[i] = min;
		}
		
	}

	// greater array
	// last element = -1
	// greater[i] = index of element greater in the right side of array[i]
	// greater[i] = -1 if no such element found

	int* greater = new int[n];
	int max = n-1;
	greater[n-1] = -1;
	for(int k=n-2; k>=0; k--)
	{
		if(ans[k] >= ans[max])
		{
			max = k;
			greater[k] = -1;
		}
		else
		{
			greater[k] = max;
		}
	}

	// if both smaller and greater has element otherthan -1 at same index.
	// print them if found
	// else traverse till end
	// if not found till end, print no triplete found

	for(int j=0; j<n; j++)
	{
		if(smaller[j]  != -1 && greater[j] !=-1)
		{
			res.push_back(ans[smaller[j]]);
			res.push_back(ans[j]);
			res.push_back(ans[greater[j]]);
			return res;
		}
	}
	delete[] greater;
	delete[] smaller;
	return res;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> ans;
		for(int i=0; i<n; i++)
		{
			int k;
			cin>>k;
			ans.push_back(k);
		}

		vector<int> result = findTriplate(ans,  n);
		for(int i=0; i<n; i++)
		{
			cout<< result[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}