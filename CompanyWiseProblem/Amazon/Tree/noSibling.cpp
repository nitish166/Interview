void helper(Node* root, vector<int>& res)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right!=NULL)
    {
        res.push_back(root->right->data);
    }
    else if(root->left!=NULL && root->right==NULL)
    {
        res.push_back(root->left->data);
    }
    if(root->right)
    {
        helper(root->right, res);
    }
    if(root->left)
    {
        helper(root->left, res);
    }
}


vector<int> noSibling(Node* node)
{
    // code here
    vector<int> res;
    helper(node, res);
    if(res.size()==0)
    {
        cout<<"-1";
    }
    sort(res.begin(), res.end());
    return res;
    
}