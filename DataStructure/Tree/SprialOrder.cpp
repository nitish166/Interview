#include <bits/stdc++.h>
using namespace std;
struct Node{
public:
	int data;
	Node* left, *right;
};

Node* newElement(int item);
int height(Node* root);
void printSprialOrder(Node* root);
void printGivenLevel(Node* root, int d, bool flag);

int height(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		int lheight = height(root->left);
		int rheight = height(root->right);

		if(lheight>rheight)
		{
			return(lheight+1);
		}
		else{
			return (rheight+1);
		}
	}
}

void printGivenLevel(Node* root, int d, bool flag)
{
	if(root==NULL)
	{
		return;
	}

	if(d==1)
	{
		cout<<root->data<<" ";
	}
	else{
		if(flag)
		{
			printGivenLevel(root->left, d-1, flag);
			printGivenLevel(root->right, d-1, flag);
		}
		else
		{
			printGivenLevel(root->right, d-1, flag);
			printGivenLevel(root->left, d-1, flag);
		}
	}
}



Node* newElement(int item)
{
	Node* root = new Node();
	root->data = item;
	root->left = NULL;
	root->right =NULL;
	return root;
}



void printSprialOrder(Node* root)
{
	bool flag =0;
	int h = height(root);
	for(int d=1; d<=h; d++)
	{
		printGivenLevel(root, d, flag);
		flag = !flag;
	}
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

	printSprialOrder(root);
	return 0;
}