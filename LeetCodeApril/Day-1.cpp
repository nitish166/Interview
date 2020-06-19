class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(int i=0;i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        map<int, int>:: iterator it;
        int ans =0;
        for(it = m.begin(); it!=m.end(); it++)
        {
            if(it->second==1)
            {
                ans= it->first;
                break;
            }
        }
        return ans;
    }

};


// Another Solution

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    	int result =0;
    	for(int i=0; i<nums.size(); i++)
    	{
    		result ^=nums[i];
    	}
    	return result;
    }

};
