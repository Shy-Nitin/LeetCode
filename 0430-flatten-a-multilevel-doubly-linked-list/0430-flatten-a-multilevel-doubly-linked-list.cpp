/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr) return head;
        Node* curr = head;
        while(curr){
            if(curr->child){
                //flatten the child Node;
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                //find tail
                while(curr->next) curr = curr->next;

                // connect tail to next
                if(next){
                    curr->next = next;
                    next->prev = curr;
                }
                    
            }
            curr = curr->next;   
        }
        return head;
    }
};