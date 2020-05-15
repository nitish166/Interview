// Time complexity: O(n)


int transitionPoint(int arr[], int n) {
    // code here
    bool temp = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            temp = true;
            return i;
        }
    }
    if(temp==false)
    {
        return -1;
    }
}