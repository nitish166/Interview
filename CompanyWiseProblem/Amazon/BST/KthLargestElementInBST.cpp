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


int kthLargest(Node *root, int K)
{
    //Your code here
    if(root==NULL)
    {
        return 0;
    }
    vector<int> ans;
    helper(root, ans);
    sort(ans.begin(), ans.end());
    int temp=0;
    for(int i=0; i<ans.size(); i++)
    {
        if(i==K)
        {
            temp= ans[i];
            break;
        }
    }
    return temp;
}