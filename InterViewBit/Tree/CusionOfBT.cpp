/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::solve(TreeNode* A, int B) {
    
    if(A==NULL || A->val==B)
    {
        return {};
    }
    queue<TreeNode*> q;
    q.push(A);
    int level = INT_MAX;
    int curr=0;
    while(!q.empty())
    {
        int n = q.size();
        while(n--){
            TreeNode* temp = q.front();
            q.pop();
            if((temp->left && temp->left->val==B) || (temp->right && temp->right->val==B))
            {
                level = curr+1;
            }
            else
            {
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        curr++;
        if(curr>=level)
        {
            break;
        }
    }
    vector<int> ans;
    while(!q.empty())
    {
        ans.push_back(q.front()->val);
        q.pop();
    }
    return ans;
}
