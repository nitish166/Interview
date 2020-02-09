#include <bits/stdc++.h>
using namespace std;

struct Node{

public:
	int data;
	Node* left, *right;

};


Node* newElement(int item)
{
	Node* root = new Node();
	root->data = item;
	root->left = NULL;
	root->right =NULL;
	return root;
}



void printTree(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}

int main()
{
	Node* root = newElement(1);
	root->left = newElement(2);
	root->right = newElement(3);
	root->left->left = newElement(4);
	root->left->right = newElement(5);
	root->right->left = newElement(6);
	root->right->right = newElement(7);

	printTree(root);
	return 0;
}