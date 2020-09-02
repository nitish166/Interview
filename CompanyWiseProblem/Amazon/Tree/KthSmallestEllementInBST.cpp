// Return the Kth smallest element in the given BST 
int KthSmallestElement(Node *root, int K)
{
    //add code here.
    if(root==NULL)
    {
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
       
    }
    sort(ans.begin(), ans.end());
    int n = ans.size();
    for(int i=0; i<n; i++)
    {
        if(i+1==K)
        {
            return ans[i];
        }
    }
    return -1;
}