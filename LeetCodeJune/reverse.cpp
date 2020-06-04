/*
 Day 4: ProblemName: reverse string
        Author     : Nitish Kumar
        Time       : 2:01 AM
        Status     : Accepted.
        Source     : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/
        Time Complexity: O(n)
        Space Complexity: O(1)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        
       for(int i=0; i<s.size()/2; i++)
       {
           swap(s[i], s[s.size()-i-1]);
       }
        
       
    }
};

// Another method

class Solution {
public:
    void reverseString(vector<char>& s) {
        
       reverse(s.begin(), s.end());
    
    }
};

// For printing
class Solution {
public:
    void reverseString(vector<char>& s) {
        
       for(int i=s.size()-1; i>=0; i--)
       {
       	cout<<s[i]<<" ";
       }
         
    }
};