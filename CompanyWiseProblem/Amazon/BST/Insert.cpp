Node* insert(Node* root, int Key)
{
	if(root==NULL)
	{
		return new Node(Key);
	}
	if(root->data > Key)
	{
		root->left = insert(root->left, Key);
	}
	if(root->data < Key)
	{
		root->right = insert(root->right, Key);
	}
	return root;
}