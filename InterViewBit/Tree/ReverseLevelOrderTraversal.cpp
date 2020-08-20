/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    
    vector<int> res;
    if(A==NULL)
    {
        return res;
    }
    queue<TreeNode* > q;
    stack<TreeNode* > s;
    q.push(A);
    while(!q.empty())
    {
        TreeNode* temp = q.front();
        q.pop();
        s.push(temp);
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
    }
    while(!s.empty())
    {
            int n = s.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* temp = s.top();
                res.push_back(temp->val);
                s.pop();
                
            }
            
    }
    return res;
}
