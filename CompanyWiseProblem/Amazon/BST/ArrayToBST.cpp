using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
 
};

Node* newNode(int val);
void preOrder(Node* root);
Node* arrayToBST(vector<int> ans, int start, int end);

Node* newNode(int val)
{
    Node* root = new Node();
    root->data = val;
    root->left = NULL;
    root->right = NULL;
    return root;
}
Node* arrayToBST(int arr[], int start, int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid = (start+end)/2;
    Node* tnode = newNode(arr[mid]);
    tnode->left = arrayToBST(arr, start, mid-1);
    tnode->right = arrayToBST(arr, mid+1, end);
    return tnode;
}

void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    Node* tnode = arrayToBST(arr, 0, n-1);
	    preOrder(tnode);
	    cout<<endl;
	}
	return 0;
}