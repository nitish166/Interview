

void inOrderFun(vector<int> &res, Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderFun(res, root->left);
    res.push_back(root->data);
    inOrderFun(res, root->right);
}

vector<int> inOrder(Node* root)
{
  // Your code here
  vector<int> res;
  inOrderFun(res, root);
  return res;
  
}
