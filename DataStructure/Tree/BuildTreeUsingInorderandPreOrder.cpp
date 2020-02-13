#include <bits/stdc++.h>
using namespace std;

struct Node{
public:
	char data;
	Node* left;
	Node* right;
};

Node* newElement(char item)
{
	Node* root = new Node();
	root->data = item;
	root->left = NULL;
	root->right = NULL;
	return root;
}

int search(char in[], int start, int end, char value)
{
	for(int i=start; i<=end; i++)
	{
		if(in[i]==value)
		{
			return i;
		}
	}
}


Node* buildTree(char in[], char pre[], int start, int end)
{
	static int preIndex=0;
	if(start>end)
	{
		return NULL;
	}

	Node* tnode = newElement(pre[preIndex++]);
	if(start==end)
	{
		return tnode;
	}
	int inIndex = search(in, start, end, tnode->data);
	tnode->left = buildTree(in, pre, start, inIndex-1);
	tnode->right = buildTree(in, pre, inIndex+1, end);
	return tnode;

}


void printPostOrder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
	
}




int main()
{
	char in[] = {'D','B', 'E', 'A' ,'F', 'C'};
	char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
	int len = sizeof(in)/sizeof(in[0]);
	Node* root = buildTree(in, pre, 0, len-1);
	cout<<"Print PostOrder Traversal"<<endl;
	printPostOrder(root);
	return 0;
}