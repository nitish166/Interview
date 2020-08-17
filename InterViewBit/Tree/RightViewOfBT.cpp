/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode* root, int level, int *max_level, vector<int>& res)
{
    if(root==NULL)
    {
        return;
    }
    if(*max_level<level)
    {
       res.push_back(root->val);
       *max_level = level;
    }
    helper(root->right, level+1, max_level, res);
    helper(root->left, level+1, max_level, res);
}

vector<int> Solution::solve(TreeNode* A) {
    
    vector<int> res;
    int max_level = 0;
    helper(A, 1, &max_level, res);
    return res;
}
