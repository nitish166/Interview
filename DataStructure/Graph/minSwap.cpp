// Program to find min swap required  to sort array element
// Time complexity : O(N*N)



int minSwaps(int A[], int N){
    /*Your code here */
    
    int count=0;
    int min =A[0];
    int index=0;
    for(int i=0;i<N-1;i++)
    {
        min=A[i];
        index =i;
        for(int j=i+1; j<N;j++)
        {
            if(A[j]<min)
            {
                min=A[j];
                index=j;
            }
        }
        
        if(min!=A[i])
        {
            count++;
            int temp = A[index];
            A[index] = A[i];
            A[i] = temp;
        }
    }
    return count;
}