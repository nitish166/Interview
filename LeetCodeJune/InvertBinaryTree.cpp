/*
 Day 1: ProblemName: InvertBinaryTree
        Author     : Nitish Kumar
        Time       : 2:40 PM
        Status     : Accepted.
        Source     : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3347/
        Time Complexity: O(n)
        Space Complexity: O(1)
*/
class Solution {
public:
    void mirror(TreeNode* root)
    {
        // Base case
        if(root==NULL)
        {
            return; 
        }
        else
        {
            // Recursion Call
            mirror(root->left);
            mirror(root->right);
            
            // Swap
            struct TreeNode* temp;
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
    }
    TreeNode* invertTree(TreeNode* root) {
         
         // function call
         mirror(root);
         return root;
        
    }
};