int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)
  {
      return 0;
  }
  int count = countLeaves(root->left)+countLeaves(root->right);
  if(root->left==NULL && root->right==NULL)
  {
      return count+1;
  }
  return count;
}
