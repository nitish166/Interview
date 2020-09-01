vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> res(C);
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    
 
    for(int i=0; i<C; i++)
    {
        for(int j=0; j<C; j++)
        {
            int val = A[i]+B[j];
            if(pq.size()<C)
            {
                pq.push(val);
            }
            else
            {
                if(pq.top()<val)
                {
                    pq.pop();
                    pq.push(val);
                }
                else
                {
                    break;
                }
            }
        }
    }
    for(int i=C-1; i>=0; i--)
    {
        res[i] = (pq.top());
        pq.pop();
    }
    
    return res;
 
}
