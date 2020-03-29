int findK(int A[MAX][MAX], int n, int m, int k)
{
//Your code here
	
	if (n < 1 || m < 1) 
        return -1; 
  
    
    if (k <= m) 
        return A[0][k - 1]; 
  
    
    if (k <= (m + n - 1)) 
        return A[(k - m)][m - 1]; 
  
    
    if (k <= (m + n - 1 + m - 1)) 
        return A[n - 1][m - 1 - (k - (m + n - 1))]; 
  
    
    if (k <= (m + n - 1 + m - 1 + n - 2)) 
        return A[n - 1 - (k - (m + n - 1 + m - 1))][0]; 
  
    
    return findK((int (*)[MAX])(&(A[1][1])), n - 2, 
                m - 2, k - (2 * n + 2 * m - 4));
}
