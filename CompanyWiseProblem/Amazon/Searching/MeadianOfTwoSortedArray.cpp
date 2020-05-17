#include <bits/stdc++.h>
using namespace std;


double findMedian(vector<int> & array1, vector<int> & array2, int start_a, int end_a, int start_b, int end_b)
{
	if((end_a - start_a == 1) && ((end_b -start_b == 1)))
	{
		return (1.0*(max(array1[start_a], array2[start_b]) + min(array1[end_a], array2[end_b])))/2;
	}

	int m1_index = (start_a + end_a)/2;
	int m2_index = (start_b + end_b)/2;

	int m2 = array2[m2_index];
	int m1 = array1[m1_index];

	if(m2==m1)
	{
		return m2;
	}

	if(m1 < m2)
	{
		start_a = m1_index;
		end_b = m2_index;
	}
	else
	{
		start_b = m2_index;
		end_a = m1_index;
	}

	return findMedian(array1, array2, start_a, end_a, start_b, end_b);
}



double MedianOfArrays(vector<int> & array1, vector<int> & array2)
{
	
	return findMedian(array1, array2, 0, array1.size()-1, 0, array2.size()-1);
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		vector<int> array1;
		for(int i=0; i<m; i++)
		{
			int temp;
			cin>>temp;
			array1.push_back(temp);
		}
		int n;
		cin>>n;
		vector<int> array2;
		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;
			array2.push_back(temp);
		}

		double ans =  MedianOfArrays(array1, array2);
		cout<<ans<<endl;
	}
	return 0;
}