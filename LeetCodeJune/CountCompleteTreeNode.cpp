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

// Iterative Solution
class Solution {
public:
    int countNodes(TreeNode* root) {
        
        
        if(root==NULL)
        {
            return 0;
        }
        
        queue<TreeNode* >q;
        q.push(root);
        int count=0;
        
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            
            count++;
            
            if(temp->left !=NULL)
            {
                q.push(temp->left);
            }
            
            if(temp->right !=NULL)
            {
                q.push(temp->right);
            }
        }
        return count;
    }
};


// using recursion method
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

    int getLeftHeight(TreeNode* root)
    {
        int height =0;
        while(root!=NULL)
        {
            height++;
            root=root->left;
            
        }

        return height;
    }


    int countNodes(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }

        int lheight = getLeftHeight(root->left);
        int rheight = getLeftHeight(root->right);

        if(lheight==rheight)
        {
            return (1<<lheight) + countNodes(root->right);
        }
        return (1<<rheight) + countNodes(root->left);
        
    }
};