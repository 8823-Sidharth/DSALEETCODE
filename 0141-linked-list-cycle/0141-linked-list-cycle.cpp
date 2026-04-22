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
    bool hasCycle(ListNode *head) {
        ListNode* start = head;
        ListNode* end = head;
        while(end != NULL && end->next != NULL){
            start = start->next;
            end = end->next->next;
            if(start == end) return true;
        } 
        return false;
    }
};