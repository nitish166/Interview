int isSumProperty(Node *root)
{
 // Add your code here
 //base case
 if(root==NULL || (root->left==NULL && root->right==NULL))
 {
     return true;
 }
 
 int a = root->left !=NULL ? root->left->data: 0;
 int b = root->right !=NULL ? root->right->data : 0;
 
 return (a+b == root->data) && isSumProperty(root->left) && isSumProperty(root->right);
}