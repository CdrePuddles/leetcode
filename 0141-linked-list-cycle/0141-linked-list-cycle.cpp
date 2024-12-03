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
        ListNode* cursor = head;
        map<ListNode*, ListNode*> dictionary;
        while (cursor != nullptr) {
            if (dictionary.find(cursor) == dictionary.end()) {
                dictionary[cursor] = cursor;
            } else {
                return true;
            }
            cursor = cursor->next;
        }

        return false;
    }
};