// Return True if the given Binary Tree is a Full Binary Tree. Else return False
bool isFullTree (struct Node* root)
{
    //add code here.
    if(root==NULL)
    {
        return true;
    }
    // check leaf
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
    // if leaf is not null
    if(root->left!=NULL && root->right !=NULL)
    {
        return (isFullTree(root->left) && isFullTree(root->right));
    }
    return false;
}
