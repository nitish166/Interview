#include <bits/stdc++.h>
using namespace std;
struct Node{
public:
	int data;
	Node* left;
	Node* right;
};


buildBST(Node* root, int value)
{
	
}


int main()
{
	int n;
	cin>>n;
	int* arr = new int[];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Node* root = NULL;
	for(int i=0;i<n;i++)
	{
		buildBST(root, arr[i]);
	}
	return 0;
}