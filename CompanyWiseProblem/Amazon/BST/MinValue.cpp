int maiValue(Node* root)
{
	if(root==NULL)
	{
		return -1;
	}
	Node* current = root;
	while(current && current->left!=NULL)
	{
		current = current->left;
	}
	return current->data;
}