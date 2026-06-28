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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        int n = 1;
        while(temp->next){
            temp = temp->next; n++;
        }

        k = k % n; 
        if(k==0) return head;
        temp->next = head;

        ListNode* newTail=head;
        ListNode* newHead = nullptr;
        for(int i=0; i< n-k-1; i++){
            newTail = newTail->next;
        }
        newHead = newTail->next;
        newTail->next = nullptr;
        return newHead; 
    }
};