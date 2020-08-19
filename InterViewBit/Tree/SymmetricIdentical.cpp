/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int helper(TreeNode* A, TreeNode* B)
{
    if(A==NULL && B==NULL)
    {
        return 1;
    }
    if((A==NULL && B!=NULL) || (A!=NULL && B==NULL))
    {
        return 0;
    }
    return (A->val==B->val) && helper(A->left, B->right) && helper(A->right, B->left);
}
 
int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL)
    {
        return 1;
    }
    int ans = helper(A->left, A->right);
    return ans;
}
