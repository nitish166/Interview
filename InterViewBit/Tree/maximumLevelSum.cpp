/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A) {
    
    if(A==NULL)
    {
        return 0;
    }
    int val = INT_MIN;
    int sum =0;
    queue<TreeNode* > q;
    q.push(A);
    while(!q.empty())
    {
        int n = q.size();
        for(int i=0; i<n; i++)
        {
            TreeNode* temp = q.front();
            q.pop();
            sum +=temp->val;
            if(sum>val)
            {
                val = sum;
            }
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
            
        }
        sum =0;
    }
    return val;
    
}
