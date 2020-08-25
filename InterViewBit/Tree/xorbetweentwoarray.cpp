class trienode{
    public:
    trienode *left;
    trienode *right;
};
void insert(trienode *curr,int n)
{
    trienode *root=curr;
    for(int i=31;i>=0;i--)
    {
        int b=(n>>i)&1;
        if(b==0)
        {
            if(!root->left)
            {
                root->left= new trienode();
            }
            root=root->left;
        }
        else
        {
            if(!root->right)
            {
                root->right= new trienode();
            }
            root=root->right;
        }
    }
}
int find(trienode *curr,vector<int> v)
{
    int ans=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int a=v[i];
        trienode *root=curr;
        int xor1=0;
        for(int j=31;j>=0;j--)
        {
            int b=(a>>j)&1;
            if(b==0)
            {
                if(root->right)
                {
                    xor1+=pow(2,j);
                    root=root->right;
                }
                else
                {
                    root=root->left;
                }
            }
            else
            {
                if(root->left)
                {
                    xor1+=pow(2,j);
                    root=root->left;
                }
                else
                {
                    root=root->right;
                }
            }
        }
        ans=max(ans,xor1);
    }
    return ans;
}
int Solution::solve(vector<int> &A, vector<int> &B) {
    trienode *root= new trienode();
    for(int i=0;i<A.size();i++)
    {
        insert(root,A[i]);
    }
    return find(root,B);
}