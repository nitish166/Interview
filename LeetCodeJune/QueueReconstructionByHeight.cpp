/*
 Day 6: ProblemName: Queue Reconstruction by Height
        Author     : Nitish Kumar
        Time       : 7:08 PM
        Status     : Accepted.
        Source     : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3352/
        Time Complexity: 
        Space Complexity: 
*/




class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> result;
        sort(people.begin(), people.end(), [](const vector<int> &a, const vector<int> &b){
        	return (a[0]>b[0] || (a[0]==b[0] && a[1]<b[1]));
        });


        for(vector<int> & x: people)
        {
        	result.insert(result.begin() + x[1], x);
        }
        return result;

    }
};