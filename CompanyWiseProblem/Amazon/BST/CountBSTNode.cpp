void helper(Node* root, int *count, int l, int h)
{
    if(root==NULL)
    {
        return;
    }
    helper(root->left, count, l, h);
    if(root->data>=l && root->data<=h)
    {
        (*count)++;
    }
    helper(root->right, count, l, h);
}

int getCountOfNode(Node *root, int l, int h)
{
  // your code goes here   
  if(root==NULL)
  {
      return 0;
  }
  int count =0;
  helper(root, &count, l, h);
  return count;
}