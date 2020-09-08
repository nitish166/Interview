Node* getMinNode(Node* root)
{
    if(root==NULL)
    {
        return root;
    }
    Node* current = root;
    while(current && current->left!=NULL)
    {
        current = current->left;
    }
    return current;
}
Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code here
    if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return root;
    }
    if(x->right !=NULL)
    {
       return getMinNode(x->right); 
    }
    Node* succ = NULL;
    while(root!=NULL)
    {
        if(root->data>x->data)
        {
            succ = root;
            root = root->left;
        }
        else if(root->data<x->data)
        {
            root = root->right;
        }
        else
        {
            break;
        }
    }
    return succ;
}