/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 * 
 * typedef struct TreeNode treenode;
 * 
 * treenode* treenode_new(int val) {
 *     treenode* node = (treenode *) malloc(sizeof(treenode));
 *     node->val = val;
 *     node->left = NULL;
 *     node->right = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Root pointer of the tree 
 * @input B : Integer
 * 
 * @Output Integer
 */
int hasPathSum(treenode* A, int B) {
    
    if(A==NULL)
    {
        return 1;
    }
    else
    {
        int ans =0;
        int temp = B - A->val;
    if(temp==0 && A->left==NULL && A->right==NULL)
    {
        return 1;
    }
    if(A->left!=NULL)
    {
        ans = ans || hasPathSum(A->left, temp);
    }
    if(A->right!=NULL)
    {
        ans = ans || hasPathSum(A->right, temp);
    }
    return ans;
    }
    
   
}
