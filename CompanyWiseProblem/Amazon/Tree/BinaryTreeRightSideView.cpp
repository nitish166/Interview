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

// iterative Solution

class Solution {
public:

    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
        {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
           int n = q.size();
           for(int i=0; i<n; i++)
           {
                TreeNode* temp = q.front();
                q.pop();
                if(i==0)
                {
                   res.push_back(temp->val); 
                }
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



// recursive solution
class Solution {
public:
    
    void rightSide(TreeNode* root, int level, vector<int>&res)
    {
        if(root==NULL)
        {
            return;
        }
        if(res.size()<level)
        {
            res.push_back(root->val);
        }
        rightSide(root->right, level+1, res);
        rightSide(root->left, level+1, res);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> res;
        rightSide(root, 1, res);
        return res;
    }
};