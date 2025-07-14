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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int pos = 1;
        while(temp -> next != NULL){
            pos*=2;
            temp = temp -> next;
        }
        temp = head;
        int sum = 0;
        while(temp != NULL){
            if(temp -> val == 1){
                sum+=pos;
            }
            pos /=2;
            temp = temp->next;
        }
        return sum;
    }
};
