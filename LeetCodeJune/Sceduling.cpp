/*
 Day 3: ProblemName: Two City Scheduling
        Author     : Nitish Kumar
        Time       : 7:56 PM
        Status     : Accepted.
        Source     : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/
        Time Complexity: 
        Space Complexity: O(1)
*/

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        // Custom sort of two vector based on cost
        sort(costs.begin(), costs.end(), [](const vector<int>&a, const vector<int>&b){
        	return (a[0]-a[1])<(b[0]-b[1]);
        });

        int cost =0;
        // calculated cost of first part
        for(int i=0; i<costs.size()/2; i++)
        {
        	cost +=costs[i][0];
        }

        // calculated cost of second part
        for(int i=costs.size()/2; i<costs.size(); i++)
        {
        	cost +=costs[i][1];
        }
        return cost;
    }
};