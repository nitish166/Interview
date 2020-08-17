/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void helper(TreeNode* root, int d, map<int, vector<int>> &m)
{
    if(root==NULL)
    {
        return;
    }
    m[d].push_back(root->val);
    helper(root->left, d+1, m);
    helper(root->right, d, m);
}
vector<int> Solution::solve(TreeNode* A) {
    
    vector<int> res;
    map<int, vector<int>> m;
    helper(A, 0, m);
    for (auto it = m.begin(); 
         it != m.end(); ++it) 
    { 
        // for (auto itr = it->second.begin(); 
        //      itr != it->second.end(); ++itr) 
        //     res.push_back(*itr);
        
        for(auto i : it->second)
        {
            res.push_back(i);
        }
    } 
    return res;
    
}
