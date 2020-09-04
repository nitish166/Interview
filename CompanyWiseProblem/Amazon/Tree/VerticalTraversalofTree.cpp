void verticalOrder(Node *root)
{
    //Your code here
    if(root==NULL)
    {
        return;
    }
    int d = 0;
    map<int, vector<int> > m;
    queue<pair<Node*, int>> que;
    que.push(make_pair(root, d));
    while(!que.empty())
    {
        pair<Node*, int> temp = que.front();
        que.pop();
        d=temp.second;
        Node* node = temp.first;
        m[d].push_back(node->data);
        if(node->left !=NULL)
        {
            que.push(make_pair(node->left, d-1));
        }
        if(node->right !=NULL)
        {
            que.push(make_pair(node->right, d+1));
        }
    }
    for(auto i=m.begin(); i!=m.end(); i++)
    {
        for(int j=0; j<i->second.size();j++)
        {
            cout<<i->second[j]<<" ";
        }
    }
}

