int Solution::solve(vector<int> &pre) {
    
     // Create an empty stack 
    stack<int> s; 
    int n=pre.size();
  
    // Initialize current root as minimum possible 
    // value 
    int root = INT_MIN; 
  
    // Traverse given array 
    for (int i=0; i<n; i++) 
    { 
        // If we find a node who is on right side 
        // and smaller than root, return false 
        if (pre[i] < root) 
            return false; 
  
        // If pre[i] is in right subtree of stack top, 
        // Keep removing items smaller than pre[i] 
        // and make the last removed item as new 
        // root. 
        while (!s.empty() && s.top()<pre[i]) 
        { 
            root = s.top(); 
            s.pop(); 
        } 
  
        // At this point either stack is empty or 
        // pre[i] is smaller than root, push pre[i] 
        s.push(pre[i]); 
    } 
    return true; 
}
