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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        if(root==NULL)
        {
            return res;
        }
        bool flag = true;
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
           
            for(int i=0; i<n; i++)
            {
                 TreeNode* temp = q.front();
                 q.pop();
                 if(flag==true)
                 {
                     ans.push_back(temp->val);
                 }
                 else
                 {
                     ans.insert(ans.begin(), temp->val);
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
            flag = !flag;
            res.push_back(ans);
            ans.clear();
        }
        return res;
    }
};