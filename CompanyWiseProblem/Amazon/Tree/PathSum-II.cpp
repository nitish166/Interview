class Solution {
public:
    void path(TreeNode* root, int sum, vector<int> &curr_path, vector<vector<int>> &result)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL && root->val==sum)
        {
            curr_path.push_back(root->val);
            result.push_back(curr_path);
            curr_path.pop_back();
            return;
        }
        
        int sum_left = sum-root->val;
        curr_path.push_back(root->val);
        path(root->left, sum_left, curr_path, result);
        path(root->right, sum_left, curr_path, result);
        curr_path.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> result;
        vector<int> curr_path(0);
        path(root, sum, curr_path, result);
        return result;
    }
};