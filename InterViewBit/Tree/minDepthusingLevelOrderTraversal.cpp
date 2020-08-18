/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct qItem
{
    TreeNode* node;
    int depth;
};
int Solution::minDepth(TreeNode* A) {
    
    // base case
    if(A==NULL)
    {
        return 0;
    }
    
    queue<qItem> q;
    
    // enqueue root and initialize depth as 1
    qItem qi = {A, 1};
    q.push(qi);
    
    while(!q.empty())
    {
        qi = q.front();
        q.pop();
        
        // get details of removed items
        TreeNode* temp = qi.node;
        int depth = qi.depth;
        
        // if this is first leaf node so far 
        // then return depth as a answer
        
        if(temp->left==NULL && temp->right==NULL)
        {
            return depth;
        }
        
        if(temp->left!=NULL)
        {
            qi.node = temp->left;
            qi.depth = depth+1;
            q.push(qi);
        }
        
        if(temp->right!=NULL)
        {
            qi.node = temp->right;
            qi.depth = depth +1;
            q.push(qi);
        }
    }
    
}
