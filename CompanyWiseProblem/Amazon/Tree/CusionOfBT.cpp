/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int helper(TreeNode* root, int &parent, int value, int height)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->val==value)
        {
            return height;
        }
        parent = root->val;
        int left = helper(root->left, parent, value, height+1);
        if(left)
            return left;
        parent = root->val;
        int right = helper(root->right, parent, value, height+1);
        return right;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(root->val==x || root->val==y)
        {
            return false;
        }
        
        int xParent = -1;
        
        int xHeight = helper(root, xParent, x, 0);
    
        
        int yParent = -1;
        
        int yHeight = helper(root, yParent, y, 0);
        
        
        if(xParent!=yParent && xHeight==yHeight)
        {
            return true;
        }
        return false;
    }
};