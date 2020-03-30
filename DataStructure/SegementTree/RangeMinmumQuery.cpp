#include<bits/stdc++.h>
using namespace std;


void buildTree(int arr[], int tree[], int start, int end, int nodeTree)
{
     if(start==end)
     {
        tree[nodeTree]=arr[start];
        
     }else{

        int mid = (start+end)/2;

     buildTree(arr, tree, start, mid, 2*nodeTree);
     buildTree(arr, tree, mid+1, end, 2*nodeTree+1);
     if(tree[2*nodeTree]<tree[2*nodeTree+1])
     {
        tree[nodeTree]=tree[2*nodeTree];
     }else{
        tree[nodeTree]=tree[2*nodeTree+1];
     }

     }

}

void updateQuery(int arr[], int tree[], int start, int end, int treeNode, int idx, int value)
{
    if(start==end)
    {
        arr[idx]=value;
        tree[treeNode]=value;
        
    }else{
        int mid = (start+end) /2;

    if(idx>=start && idx<=mid)
    {
      updateQuery(arr, tree, start, mid, 2*treeNode, idx, value);
    }else{
      updateQuery(arr, tree, mid+1, end, 2*treeNode+1, idx, value);
    }

    if(tree[2*treeNode]<tree[2*treeNode+1])
    {
        tree[treeNode]=tree[2*treeNode];
    }
    else{
        tree[treeNode]=tree[2*treeNode+1];
    }

    }
    


}

int query(int tree[], int start, int end, int treeNode, int left, int right)
{
    // completly inside the range

    if(start>right || end<left)
    {
        return 100005;
    }


    // completly outside the range

    if(start>=left && end<=right)
    {
        return tree[treeNode];
    }

    // partially inside and partially outside the range

    int mid= (start+end)/2;

    int ans1= query(tree, start, mid, 2*treeNode, left, right);
    int ans2= query(tree, mid+1, end, 2*treeNode+1, left, right);

    if(ans1>ans2)
    {
        return ans2;
    }else{
        return ans1;
    }
}



int main() {

	// Write your code here
    //int tree[2000005],arr[100005];
    int n,Q;
    cin>>n>>Q;
    int* arr = new int[n];
    int* tree = new int[4*n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    buildTree(arr, tree, 1, n, 1);

    while(Q--)
    {
        int l,r;
        char quer;
        cin>>quer>>l>>r;
        if(quer=='q')
        {
            int ans = query(tree, 1, n, 1, l, r);
            cout<<ans<<endl;
        }
        else{
             updateQuery(arr, tree, 1, n, 1, l, r);
        }
    }
    return 0;
}