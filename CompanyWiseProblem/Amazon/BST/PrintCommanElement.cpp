void helper(Node* root, vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    helper(root->left, ans);
    ans.push_back(root->data);
    helper(root->right, ans);
}

vector <int> printCommon(Node *root1, Node *root2)
{
     //Your code here
     vector<int> ans;
     if(root1==NULL && root2==NULL)
     {
         return ans;
     }
     helper(root1, ans);
     helper(root2, ans);
     map<int, int> m;
     for(int i=0; i<ans.size(); i++)
     {
         m[ans[i]]++;
     }
     vector<int> res;
     for(auto x: m)
     {
         if(x.second==2)
         {
             res.push_back(x.first);
         }
     }
     return res;
}


