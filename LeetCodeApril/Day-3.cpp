// Maximum SubArray Probleam


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==0)
        {
            return 0;
        }
        
        int curr_sum =nums[0], global_sum = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            curr_sum = max(nums[i], curr_sum+nums[i]);
            global_sum = max(curr_sum, global_sum);
        }
        
        return global_sum;
    }
};