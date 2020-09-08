// returns an array of node values in the BST (rooted at 'root')
// that lie in the given range [low, high]

void helper(Node* root, vector<int>&ans, int low, int high)
{
    if(root==NULL)
    {
        return;
    }
    helper(root->left, ans, low, high);
    if(root->data>=low && root->data<=high)
    {
        ans.push_back(root->data);
    }
    helper(root->right, ans, low, high);
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here   
  vector<int> ans;
  if(root==NULL)
  {
      return ans;
  }

  helper(root, ans, low, high);
  sort(ans.begin(), ans.end());
  return ans;
}
