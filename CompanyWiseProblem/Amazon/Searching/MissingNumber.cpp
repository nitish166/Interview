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


// 2nd method
// Time complexity: O(n)
// space Complexity: O(1)

int MissingNumber(vector<int>& array, int n) {
    int xor_array = 0, xor_n = 0;

    // xor of all array elements
    for (int i = 0; i < n - 1; i++) xor_array = xor_array ^ array[i];

    // xor of n natural numbers
    for (int i = 1; i <= n; i++) xor_n = xor_n ^ i;

    return xor_n ^ xor_array;
}