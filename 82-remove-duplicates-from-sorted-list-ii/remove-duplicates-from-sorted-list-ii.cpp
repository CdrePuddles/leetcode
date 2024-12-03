#include <map>
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* ret = nullptr;
        ListNode* retHead = ret;
        map<int, vector<ListNode*>> dict;

        while (temp != nullptr) {
            dict[temp->val].push_back(temp);
            temp = temp->next;
        }

        for (auto loop : dict) {
            if (loop.second.size() > 1) {
                //
            } else if (ret == nullptr) {
                ret = loop.second[0];
                retHead = ret;
            } else {
                ret->next = loop.second[0];
                ret = ret->next;
            }
        }

        if (ret == nullptr) {
            return nullptr;
        }

        ret->next = nullptr;

        return retHead;
    }
};