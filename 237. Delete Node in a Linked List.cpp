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
        ListNode* temp = node;
        ListNode* temp2 = node;
        while (node->next != NULL) {
            node->val = node->next->val;

            if (node->next->next == NULL) {
                break;
            }
            node = node->next;
        }
        node->next = NULL;
    }
};
