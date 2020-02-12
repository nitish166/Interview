#include <bits/stdc++.h>
using namespace std;

struct Node{
public:
	int data;
	Node* left;
	Node* right;
};

Node* newElement(int item)
{
	Node* root = new Node();
	root->data = item;
	root->left = NULL;
	root->right = NULL;
	return root;
}


void printInorder(Node* root)
{
	
}




int main()
{
	char in[] = {'a','b', 'c', 'd' ,'e'};
	char pre[] = {'b', 'c', 'd', 'e', 'a'};

	int len = sizeof(in)/sizeof(in[0]);
	Node* root = buildTree(in, pre, 0, len-1);
	cout<<"print inorder tree"<<endl;
	printInorder(root);
	return 0;
}