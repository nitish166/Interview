map<int, int> m;
map<int, int>:: iterator it;
void verticalSumFun(Node* root, int hd)
{
    if(root==NULL)
    {
        return;
    }
    verticalSumFun(root->left,  hd-1);
    m[hd] +=root->data;
    verticalSumFun(root->right,  hd+1);
    return;
}

vector <int> verticalSum(Node *root) {
    // add code here.
    vector<int> res;
    int hd =0;
    verticalSumFun(root, hd);
    for(it = m.begin(); it!=m.end(); it++)
    {
        res.push_back(it->second);
    }
    m.clear();
    return res;
}