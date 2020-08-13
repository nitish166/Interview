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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> res;
        if(root==NULL)
        {
            return res;
        }
        stack<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
                int n = q.size();
               
            for(int i=0; i<n; i++)
            {
                 TreeNode* temp = q.top();
                q.pop();
                res.push_back(temp->val);
              
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
            }
               
            
        }
        return res;
    }
};