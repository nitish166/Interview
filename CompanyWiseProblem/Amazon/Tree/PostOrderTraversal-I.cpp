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
// time complexity :4nm
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res;
        if(root==NULL)
        {
            return res;
        }
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* temp = s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left!=NULL)
            {
                s1.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                s1.push(temp->right);
            }
        }
        while(!s2.empty())
        {
            int n = s2.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* temp = s2.top();
                s2.pop();
                res.push_back(temp->val);
            }
        }
        return res;
    }
};