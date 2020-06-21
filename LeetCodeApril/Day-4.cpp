class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j =0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[j++] = nums[i];
            }
        }
        
        // assigning zero after non zero element
        for(; j<nums.size(); j++)
        {
            nums[j]=0;
        }
        
        
        
    }
};




// Another Methos using two pointer technique

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int last=0, curr=0;
        
        while(curr<nums.size())
        {
            if(nums[curr] !=0)
            {
                swap(nums[last], nums[curr]);
                last++;
            }
            curr++;
        }
        
        
        
    }
};