class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        int ans = 0;
        for(auto x: m)
        {
            if(x.second>nums.size()/2)
            {
                ans = x.first;
            }
        }
        return ans;
    }
};



// 2nd method
// Time complexity : O(nlogn)
// 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};


// 3rd Method

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0, majority;
        for (int num : nums) {
            if (!counter) {
                majority = num;
            }
            counter += num == majority ? 1 : -1;
        }
        return majority;
    }
};

// 4rd method 