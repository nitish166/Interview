#include <bits/stdc++.h>
using namespace std;
void spiralOrder( vector<vector<int> > &A, int n)
{
	int top, bottom, left, right, dir;
	top =0;
	bottom = A.size()-1;
	left =0;
	right = A[0].size()-1;
	dir =0;
	int i;

	int temp=0;

	while(top<=bottom && left<=right)
	{
		if(dir == 0)
		{
			for(i=left; i<=right; i++)
			{
				temp++;
				if(temp==n)
				{
					cout<<A[top][i]<<" ";
				}
				
			}
			top++;
		}
		else if(dir == 1)
		{
			for(i=top; i<=bottom; i++)
			{
				temp++;
				if(temp==n)
				{
					cout<<A[i][right]<<" ";
				}
				
			}
			right--;
		}
		else if(dir == 2)
		{
			for(i=right; i>=left; i--)
			{
				temp++;
				if(temp==n)
				{
					cout<<A[bottom][i]<<" ";
				}
				
			}
			bottom--;
		}
		else if(dir == 3)
		{
			for(i=bottom; i>=top; i--)
			{
				temp++;
				if(temp==n)
				{
					cout<<A[i][left]<<" ";
				}	
			}
			left++;
		}

		dir = (dir+1) %4;

	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int row, col;
		cin>>row>>col;
		int n;
		cin>>n;
		vector<vector<int> > vec;

		for(int i=0; i<row; i++)
		{
			vector<int> v1;
			for(int j=0; j<col; j++)
			{
				int k;
				cin>>k;
				v1.push_back(k);
			}
			vec.push_back(v1);
		}	

		spiralOrder(vec, n);
		cout<<endl;

	}

	return 0;
}