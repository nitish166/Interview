#include <bits/stdc++.h>
using namespace std;


buildTree(int* arr, int* tree, int start, int end, int treeNode)
{
	if(start==end)
	{
		tree[treeNode] = arr[start];
		return;
	}
	int mid = (start+end);
	buildTree(arr, tree, start, mid, 2*treeNode);
	buildTree(arr, tree, mid+1, end, 2*treeNode+1);
	tree[treeNode] = min(tree[2*treeNode], tree[2*treeNode+1]);
	
}


void updateSegementTreeLazy(int* tree, int* lazy, int low, int high, int startR, int endR, int currPos, int inc)
{
	if(low>high)
	{
		return;
	}

	if(lazy[currPos] !=0)
	{
		tree[currPos] += lazy[currPos];


		if(low !=high)
		{
			lazy[2*currPos] +=lazy[currPos];
			lazy[2*currPos+1] +=lazy[currPos];
		}
		lazy[currPos] =0;
	}

	// No overlap

	if(startR>high || endR<low)
	{
		return;
	}

	// complete overlap

	if(startR<=low && high <=endR)
	{
		tree[currPos] +=inc;
		if(low !=high)
		{
			lazy[2*currPos] +=inc;
			lazy[2*currPos+1] +=inc;
		}
		return;
	}

	//Partial Overlap
	int mid = (low+high)/2;
	updateSegementTreeLazy(tree, lazy, low, mid, startR, endR, 2*currPos, inc);
	updateSegementTreeLazy(tree, lazy, mid+1, end, startR, endR, 2*currPos+1, inc);
	tree[currPos] = min(tree[2*currPos], tree[2*currPos+1]);
}


int main()
{
	int arr[] = {1, 3, -2 ,4};
	int* tree = new int[12]();
	buildTree(arr, tree, 0, n-1, 1);

	// () means here initilize all array with zero
	int* lazy = new int[12]();
	updateSegementTreeLazy(tree, lazy, 0, 3, 0, 3, 1, 3);
	updateSegementTreeLazy(tree, lazy, 0, 3, 0, 1, 1, 2);

	
	cout<<"Segement Tree"<<endl;
	for(int i=1; i<12; i++)
	{
		cout<<tree[i]<<end;
	}

	cout<<"Lazy Tree"<<endl;
	for(int i=1; i<12; i++)
	{
		cout<<lazy[i]<<endl;
	}
	return 0;
}