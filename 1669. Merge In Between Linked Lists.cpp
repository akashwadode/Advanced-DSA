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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int dis = b - a + 1;
        ListNode* head = list1;
        while (a-- != 1) {
            list1 = list1->next;
        }

        ListNode* front = list1;

        while (dis--) {
            list1 = list1->next;
        }

        front->next = list2;

        while (list2->next != NULL) {
            list2 = list2->next;
        }

        list2->next = list1->next;

        return head;
    }
};
