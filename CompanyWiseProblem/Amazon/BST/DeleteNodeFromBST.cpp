// Return the root of the modified BST after deleting the node with value X

Node* minValueNode(Node* root)
{
    Node* current = root;
    while(root && root->left!=NULL)
    {
        current = current->left;
    }
    return current;
}

Node *deleteNode(Node *root,  int X)
{
    // your code goes here
    if(root==NULL)
    {
        return root;
    }
    if(root->data>X)
    {
        root->left = deleteNode(root->left, X);
    }
    else if(root->data<X)
    {
        root->right = deleteNode(root->right, X);
    }
    else
    {
        // single child
        if(root->left==NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
            
    }
    
}
