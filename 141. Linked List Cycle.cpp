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
        ListNode* tortoise = head;
        ListNode* rabbit = head;
        while(rabbit && rabbit -> next){
            rabbit = rabbit -> next -> next;
            tortoise = tortoise -> next;
            if(rabbit == tortoise){
                return true;
            }
        }
        return false;
    }
};
