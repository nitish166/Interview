// Program to DFS traversal
// Construction of tree using structure.

#include<bits/stdc++.h>
using namespace std;
struct Node
{
public:
	int key;
	Node* left;
	Node* right;	
};

Node* newElement(int item);
void printInorder(Node* root);


Node* newElement(int item)
{
	Node* root = new Node();
	root->key = item;
	root->left = NULL;
	root->right = NULL;
	return root;
}

void printInorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	printInorder(root->left);
	cout<<root->key<<" ";
	printInorder(root->right);
}


void PrintPreOrder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->key<<" ";
	PrintPreOrder(root->left);
	PrintPreOrder(root->right);
}


void PrintPostOrder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	PrintPreOrder(root->left);
	PrintPreOrder(root->right);
	cout<<root->key<<" ";
}



int main()
{
	Node* root = newElement(1);
	root->left = newElement(2);
	root->right = newElement(3);
	root->left->left = newElement(4);
	root->left->right = newElement(5);
	printInorder(root);
	cout<<endl;
	return 0;
}