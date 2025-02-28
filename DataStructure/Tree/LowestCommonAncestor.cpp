//Code by 1shubhamjoshi1
#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        *tree = new Node(val);
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}


Node* LCA(Node *root, int , int );

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

        int l,r;
        cin>>l>>r;

        cout<<LCA(root,l,r)->data<<endl;
    }
}
// } Driver Code Ends
/*The structure of a BST Node is as follows:

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

/*You are required to complete
this function*/
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
  if(root==NULL)
  {
      return NULL;
  }
  if((n1<root->data) && (n2<root->data))
  {
      LCA(root->left, n1, n2);
  }
  else if((n1>root->data) && (n2>root->data))
  {
      LCA(root->right, n1, n2);
  }
  else
  {
      return root;
  }
}
