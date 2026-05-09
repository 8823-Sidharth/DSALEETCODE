/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copylist(Node* head){
        Node* temp = head;
        while(temp != NULL){
            Node* copynode = new Node(temp->val);
            copynode->next = temp->next;
            temp->next = copynode;
            temp = temp->next->next;
        }
        return head;
    }
    Node* randompointers(Node* head){
        Node* temp = head;
        while(temp != NULL){
            Node* copynode = temp->next;
            if(temp->random){
                copynode->random = temp->random->next;
            }
            else{
                copynode->random = nullptr;
            }
            temp=temp->next->next;
        }
        return head;
    }
    Node* nextpointer(Node* head){
        Node* dnode = new Node(-1);
        Node* res = dnode;
        Node* temp = head;
        while( temp!=NULL){
            res->next = temp->next;
            temp->next = temp->next->next;
            res = res->next;
            temp = temp->next;
        }
        return dnode->next;
    } 
    Node* copyRandomList(Node* head) {
        copylist(head);
        randompointers(head);
        return nextpointer(head);
    }
};