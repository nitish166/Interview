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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()!=true)
        {
            long sum =0;
            int count = q.size();
            for(int i=0; i<count; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                sum +=temp->val;    
            }
            res.push_back((double)sum/count);
        }
        
        
        return res;
    }
};