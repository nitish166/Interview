class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> ans;
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            count=0;
            for(int j=0; j<n; j++)
            {
                if(nums[i]>nums[j])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        vector<int> a(101);
        vector<int> b(101);
        // frequency array
        for(int i=0; i<nums.size(); i++)
        {
            a[nums[i]]++;
        }
        // prefix sum array
        for(int i=1; i<101; i++)
        {
            b[i] = b[i-1]+a[i-1];
        }
        // final ans
        for(int i=0; i<nums.size(); i++)
        {
            ans[i] = b[nums[i]];
        }
        return ans;
    }
};