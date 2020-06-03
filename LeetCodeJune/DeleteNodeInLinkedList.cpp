/*
 Day 1: ProblemName: Delete Node In LinkedList
        Author     : Nitish Kumar
        Time       : 8:16 AM
        Status     : Accepted.
        Source     : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/
        Time Complexity: O(1)
        Space Complexity: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        *node = *(node->next);
        
            
    }
};