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
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL){
            head  = NULL;
            return head;
        }
        ListNode* i = head;
        ListNode* j = head -> next;
        while(j->next !=NULL && j->next->next!= NULL){
            i = i -> next;
            j = j->next->next;
        }
        if(i ->next -> next == NULL){
            i -> next = NULL;
        }else{
            i -> next = i->next->next;
        }
        return head;
    }
};
