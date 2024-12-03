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
        unordered_map<int, int> listMap;
        ListNode* temp = nullptr;
        ListNode* list = head;
        ListNode* prev = list;

        ListNode* listHead = head;

        while (list!=nullptr) {

            if (listMap.find(list->val) == listMap.end()) {
                listMap[list->val] = list->val;
            } else {
                temp = list;
                prev->next = list->next;
                //delete(temp);
                //temp = NULL;
                //list = temp;
                list = prev;
            }
            prev = list;
            list = list->next;
        }

        return listHead;
    }
};