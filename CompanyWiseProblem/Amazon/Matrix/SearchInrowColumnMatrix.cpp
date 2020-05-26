#include <bits/stdc++.h>
using namespace std;
bool spiralOrder( vector<vector<int> > &A, int n)
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
					return true;
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
					return true;
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
					return true;
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
					return true;
				}	
			}
			left++;
		}

		dir = (dir+1) %4;

	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int row, col;
		cin>>row>>col;
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
		int n;
		cin>>n;	

		bool ans =spiralOrder(vec, n);
		cout<<ans<<endl;

	}

	return 0;
}