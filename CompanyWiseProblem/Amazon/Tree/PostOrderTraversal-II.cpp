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

// Time complexity: 0nm
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res;
        if(root==NULL)
        {
            return res;
        }
        stack<TreeNode*> s1;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* temp = s1.top();
            s1.pop();
            res.push_back(temp->val);
            if(temp->left!=NULL)
            {
                s1.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                s1.push(temp->right);
            }
        }
        reverse(res.begin(), res.end());
       
        return res;
    }
};