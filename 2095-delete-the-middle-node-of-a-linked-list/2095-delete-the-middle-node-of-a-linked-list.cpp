/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         ListNode* temp = head;
//         if(head == NULL || head->next == NULL) return NULL;
//         int cnt=0;
//         while(temp != NULL){
//             cnt++;                // using brute forece
//             temp=temp->next;
//         }
//         int mid = (cnt/2);
//         temp = head;
//         for(int i=0;i<mid-1;i++){
//             temp = temp->next;
//         }
//         ListNode* delnode = temp->next;
//         temp->next = temp->next->next;
//         delete delnode;
//         return head;
//     }
// };
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        fast = head->next->next;
        while(fast != NULL && fast->next != NULL){     //using optimal 
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* middle = slow->next;
        slow->next = slow->next->next;
        delete middle;
        return head;

    }
};