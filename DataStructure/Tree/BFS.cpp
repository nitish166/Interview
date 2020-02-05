#include <bits/stdc++.h>
using namespace std;


struct Node
{
	public:
		int data;
		Node *left, *right;

};


void printGivenLevel(Node* root, int d);

int height(Node* node);
Node* newNode(int item);


void printLevelOrder(Node* root)
{
	int h=height(root);
	for(int i=1; i<=h; i++)
	{
		printGivenLevel(root, i);
	}
}


void printGivenLevel(Node* root, int d)
{
	if(root == NULL)
		return;
	if(d == 1)
		cout<<root->data <<" ";
	else if(d>1)
	{
		printGivenLevel(root->left, d-1);
		printGivenLevel(root->right, d-1);
	}
}


int height(Node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	else
	{
		int lheight = height(node->left);
		int rheight = height(node->right);

		if(lheight>rheight)
		{
			return (lheight+1);
		}
		else{
			return (rheight+1);
		}
	}
}



Node* newNode(int item)
{
	Node* root = new Node();
	root->data = item;
	root->left  = NULL;
	root->right = NULL;

	return (root);
}



int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout<<"Level order traversal of binary tree is :"<<endl;
	printLevelOrder(root);
	return 0;
}