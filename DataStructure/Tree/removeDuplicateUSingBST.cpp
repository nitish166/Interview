#include <bits/stdc++.h>
using namespace std;

struct Node{
public:
	int data;
	Node* left;
	Node* right;
};

void inOrder(Node* root);

Node* newNode(int item)
{
	Node* root = new Node();
	root->data = item;
	root->left = NULL;
	root->right = NULL;
	return root;
}

Node* buildBST(Node* root, int value)
{
	if(root==NULL)
	{
		return newNode(value);
	}
	else
	{
		if(value < root->data)
		{
			root->left = buildBST(root->left, value);
		}
		if(value > root->data)
		{
			root->right = buildBST(root->right, value);
		}
		return root;
	}
	
}


void inOrder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	else{
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);

	}

}

int main()
{
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Node* root = NULL;
	for(int i=0;i<n;i++)
	{
		root = buildBST(root, arr[i]);
	}
	inOrder(root);
	return 0;
}