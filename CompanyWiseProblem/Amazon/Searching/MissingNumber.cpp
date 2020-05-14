int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int sum = (n*(n+1))/2;
    
    int temp=0;
    for(int i=0; i<array.size(); i++)
    {
        temp +=array[i];
    }
    
    return sum-temp;
}