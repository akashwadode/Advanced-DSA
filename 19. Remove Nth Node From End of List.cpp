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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head -> next == NULL && n == 1){
            head = NULL;
            return head;
        }
        ListNode* left = head;
        ListNode* right = head;
        while(n--){
            right = right -> next;
        }
        if(right == NULL){
            head = head -> next;
            return head;
        }
        while(right -> next != NULL){
            right = right -> next;
            left = left -> next;
        }
        left -> next = left -> next -> next;
        cout << left -> val << " "<< right -> val;
        return head;
    }
};
