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
        if (head->next == nullptr) {
            return nullptr;
        }
        ListNode* meow = new ListNode(0, head);
        ListNode* prev = meow;
        ListNode* cur = meow;

        for (int i = 0; i < n; i++) {
            cur = cur->next;
        }

        while (cur->next) {
            cur = cur->next;
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return meow->next;

    }
};