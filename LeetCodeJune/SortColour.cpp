// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt1=0, cnt2=0, cnt3=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                cnt1++;
            }
            if(nums[i]==1)
            {
                cnt2++;
            }
            if(nums[i]==2)
            {
                cnt3++;
            }
        }
        int i=0;
        while(cnt1>0)
        {
            nums[i++]=0;
            cnt1--;
        }
        
        while(cnt2>0)
        {
            nums[i++]=1;
            cnt2--;
        }
        
        while(cnt3>0)
        {
            nums[i++]=2;
            cnt3--;
        }
        
        
    }
};