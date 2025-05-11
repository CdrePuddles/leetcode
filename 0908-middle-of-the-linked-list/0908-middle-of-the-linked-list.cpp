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
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> linked;
        
        ListNode* headPtr = head;

        while (headPtr != nullptr) {
            linked.push_back(headPtr);
            headPtr = headPtr->next;
        }

        if (linked.size()) {
            return linked[linked.size()/2];
        }

        return nullptr;
        
    }
};