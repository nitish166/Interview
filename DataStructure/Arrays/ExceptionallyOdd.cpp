class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int, int> m;
        for(int i=0; i<n; i++)
        {
            m[arr[i]]++;
        }
        int ans =-1;
        unordered_map<int, int>:: iterator it;
        for(it = m.begin(); it!=m.end(); it++)
        {
            if(it->second%2!=0)
            {
                ans = it->first;
            }
        }
        return ans;
    }
};