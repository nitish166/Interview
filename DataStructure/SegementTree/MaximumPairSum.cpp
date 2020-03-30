#include <bits/stdc++.h>
using namespace std;

struct node
{
	int maximum;
	int smaximum;
};


void buildTree(int* arr, node* tree, int start, int end, int Indexnode)
{
	if(start==end)
	{
		tree[Indexnode].maximum = arr[start];
		tree[Indexnode].smaximum = INT_MIN;
		return;
	}

	int mid = (start+end)/2;

	buildTree(arr, tree, start, mid, 2*Indexnode);
	buildTree(arr, tree, mid+1, end, 2*Indexnode+1);

	node left = tree[2*Indexnode];
	node right = tree[2*Indexnode+1];

	tree[Indexnode].maximum =  max(left.maximum, right.maximum);
	tree[Indexnode].smaximum = min(max(left.maximum, right.smaximum), max(right.maximum, left.smaximum));
	return;
}



int query(int* arr, node* tree, int start, int end, node Indexnode, int left, int right)
{
	// completly outside

	if(start>right || end<left)
	{
		return INT_MAX;
	}

	// completly inside

	if(start>=left && end<=right )
	{
		return tree[Indexnode];
	}

	// partialy inside and partialy outside

	int mid = (start+end)/2;

	int ans1 = query(arr, tree, start, mid, 2*Indexnode, left, right);
	int ans2 = query(arr, tree, mid+1, end, 2*Indexnode+1, left, right);

	return ans1+ans2;


}


int main()
{
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	node* tree = new node[3*n];

	buildTree(arr, tree, 1 , n, 1);

	int q;
	cin>>q;
	while(q--)
	{
		char c;
		int left, right;
		cin>>c>>left>>right;
		if(c=='Q')
		{
			int ans =query(arr, tree, 1, n, 1, left, right);
			cout<<ans<<endl;
		}
		else
		{
			update();
		}
	}

	return 0;
}