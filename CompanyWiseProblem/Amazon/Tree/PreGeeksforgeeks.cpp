void helper(Node* root, vector<int>&res)
{
    if(root==NULL)
    {
        return;
    }
    res.push_back(root->data);
    helper(root->left, res);
    helper(root->right, res);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> res;
  if(root==NULL)
  {
      return res;
  }
  helper(root, res);
  return res;
}