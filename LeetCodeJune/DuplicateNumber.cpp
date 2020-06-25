class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        int ans =0;
        for(auto x: m)
        {
            if(x.second!=1) ans = x.first;
        }
        return ans;
    }
};


//Another Method

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int ans =0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1]) ans = nums[i];
        }
        return ans;
    }
};