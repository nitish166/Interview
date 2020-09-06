void helper(Node* root, vector<int> &ans);
void BtToBst(Node** root, int *index, vector<int> ans);

// stored all node values in array using inorder traversal
void helper(Node* root, vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    helper(root->left, ans);
    ans.push_back(root->data);
    helper(root->right, ans);
}
void BtToBst(Node** root, int *index, vector<int> ans)
{
    Node* temp = *root;
    if(temp==NULL)
    {
        return;
    }
    BtToBst(&temp->left, index, ans);
    temp->data = ans[(*index)++];
    // (*index)++
    BtToBst(&temp->right, index, ans);
}
Node *binaryTreeToBST (Node *root)
{
    //Your code goes here
    Node* tnode = NULL;
    if(root==NULL)
    {
        return root;
    }
    tnode = root;
    vector<int> ans;
    helper(root, ans);
    sort(ans.begin(), ans.end());
    int i=0;
    BtToBst(&tnode, &i, ans);
 
    return tnode;
}