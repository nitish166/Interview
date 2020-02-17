#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

int maxPathSum(struct Node *root);
void insert(Node *root, int a1,int a2, char lr){
	if(root==NULL)
		return ;
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=new Node(a2);
					break;
			case 'R':root->right=new Node(a2);
					break;
		}
	}
	insert(root->left,a1,a2,lr);
	insert(root->right,a1,a2,lr);
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right)
;}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root=NULL;
		while(n--){
			int a1,a2;
			char lr;
			cin>>a1>>a2>>lr;
			if(root==NULL){
				root=new Node(a1);
				switch(lr){
					case 'L':root->left=new Node(a2);
							break;
					case 'R':root->right=new Node(a2);
							break;
				}
			}
			else
				insert(root,a1,a2,lr);
		}
		//inorder(root);
		//cout<<endl;
		cout<<maxPathSum(root)<<endl;		
	}
}// } Driver Code Ends
/*Complete the function below
Node is as follows
struct Node{
	int data;
	Node *left, *right;
};
*/

int findmaxUtil(Node* root, int &res)
{
    if(root == NULL)
    {
        return 0;
    }
    
    int l = findmaxUtil(root->left, res);
    int r = findmaxUtil(root->right, res);
    
    int max_single = max(max(l,r)+root->data, root->data);
    
    int max_top = max(max_single, l+r+root->data);
    res = max(res, max_top);
    return max_single;
}

int maxPathSum(struct Node *root)
{
//add code here.
int res = INT_MIN;
findmaxUtil(root, res);
return res;
}
