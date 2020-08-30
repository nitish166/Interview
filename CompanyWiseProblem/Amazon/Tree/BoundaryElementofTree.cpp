void printRightBoundary(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->right)
    {
        printRightBoundary(root->right);
        cout<<root->data<<" ";
      
        return;
    }
    else if(root->left)
    {
        printRightBoundary(root->left);
        cout<<root->data<<" ";
        
        return;
    }
}

void printLeaves(Node* root)
{
    if(root==NULL)
        return;
    
    
    if(!(root->left) && !(root->right))
    {
        cout<<root->data<<" ";
        return;
    }
    printLeaves(root->left);
    printLeaves(root->right);
}

void printLeftBoundary(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left)
    {
        cout<<root->data<<" ";
        printLeftBoundary(root->left);
        return;
    }
    else if(root->right)
    {
        cout<<root->data<<" ";
        printLeftBoundary(root->right);
        return;
    }
}
vector <int> printBoundary(Node *root)
{
     //Your code here
     vector<int> ans;
     if(root==NULL)
     {
         return ans;
     }
     else
     {
        cout<<root->data<<" ";
        printLeftBoundary(root->left);
     
        // print leaves
        printLeaves(root->left);
        printLeaves(root->right);
     
        // print right boundary
        printRightBoundary(root->right);
     
        return ans;
     }
     
}