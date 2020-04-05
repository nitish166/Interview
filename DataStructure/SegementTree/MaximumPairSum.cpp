#include <bits/stdc++.h>
using namespace std;

struct node
{
	int maximum;
	int smaximum;
};


void buildTree(int* arr, node* tree, int treeNode, int start, int end)
{
	if(start==end)
	{
		tree[treeNode].maximum = arr[start];
		tree[treeNode].smaximum = INT_MIN;
		return;
	}

	int mid = (start+end)/2;

	buildTree(arr, tree, 2*treeNode, start, mid);
	buildTree(arr, tree, 2*treeNode+1, mid+1, end);

	node left = tree[2*treeNode];
	node right = tree[2*treeNode+1];

	tree[treeNode].maximum =  max(left.maximum, right.maximum);
	tree[treeNode].smaximum = min(max(left.maximum, right.smaximum), max(right.maximum, left.smaximum));
	return;
}



node query(node* tree, int start, int end, int Indexnode, int l, int r)
{
	// completly outside

	if(start>r || end<l)
	{
		return INT_MAX;
	}

	// completly inside

	if(start>=l && end<=r )
	{
		return tree[Indexnode];
	}

	// partialy inside and partialy outside

	int mid = (start+end)/2;

	int ans1 = query(tree, start, mid, 2*Indexnode, l, r);
	int ans2 = query(tree, mid+1, end, 2*Indexnode+1, l, r);

	

	return ans1+ans2;
}


void update(int* arr, node* tree, int start, int end, int Indexnode, int idx, int value)
{
	if(start==end)
	{
		arr[idx] = value;
		tree[Indexnode].maximum = value;
		return;
	}
	else
	{
		int mid = (start+end)/2;
		if(idx>=start && idx<=mid)
		{
			update(arr, tree, start, mid, 2*Indexnode, idx, value);
		}
		else
		{
			update(arr, tree, mid+1, end, 2*Indexnode+1, idx, value);
		}

		node left = tree[2*Indexnode];
		node right = tree[2*Indexnode+1];

		tree[Indexnode].maximum = max(left.maximum, right.maximum);
		tree[Indexnode].smaximum = min(max(left.smaximum, right.maximum), max(right.smaximum, left.maximum));
	}


	

}



int main()
{
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	node* tree = new node[3*n];

	buildTree(arr, tree, 1 , 0, n-1);


	// for(int i=1; i<=3*n; i++)
	// {
	// 	cout<<tree[i].maximum <<" ,"<<tree[i].smaximum<<endl;
	// }

	int q;
	cin>>q;
	while(q--)
	{
		char c;
		int left, right;
		cin>>c>>left>>right;
		if(c=='Q')
		{
			int ans =query( tree, 1, n, 1, left, right);
			cout<<ans<<endl;
		}
		else
		{
			update(arr, tree, 1, n, 1, left, right);
		}
	}

	return 0;
}