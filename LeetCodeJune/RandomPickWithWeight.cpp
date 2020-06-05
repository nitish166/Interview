/*
 Day 4: ProblemName: Random Pick With Weight
        Author     : Nitish Kumar
        Time       : 9:01 PM
        Status     : Accepted.
        Source     : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/
        Time Complexity: O(nlong)
        Space Complexity: O(n)
*/



class Solution {
	vector<int> weight_sum;
	int sum;
public:
    Solution(vector<int>& w) {
        
       sum=0;
       for(int i: w)
       {
       		sum +=i;
       		weight_sum.push_back(sum);
       } 
    }
    
    int pickIndex() {
        
        int idx = rand()%sum;
        return binarySearch(idx+1);
    }

    int binarySearch(int val)
    {
    	int l=0;
    	int r = weight_sum.size()-1;
    	while(l<r)
    	{
    		int mid = l+ (r-l)/2;
    		if(weight_sum[mid] <val)
    		{
    			l =mid+1;
    		}
    		else
    		{
    			r = mid;
    		}
    	}
    	return l;
    }
};
