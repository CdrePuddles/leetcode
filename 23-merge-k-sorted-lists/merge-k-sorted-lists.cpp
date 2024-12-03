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
    static bool cmp(ListNode * A, ListNode * B) {
        return A->val < B->val;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (!lists.size()) {
            return nullptr;
        }
        ListNode* ret;
        vector<ListNode *> arr;

        for (ListNode* item : lists) {
            while (item != nullptr) {
                arr.push_back(item);
                item = item->next;
            }
        }
        
        if (arr.size() == 1) {
            return arr[0];
        } else if (!arr.size()) {
            return nullptr;
        }

        sort(arr.begin(), arr.end(), cmp);

        ret = arr[0];
        ListNode* retHead = ret;

        for (ListNode * item : arr) {
            ret->next = item;
            ret = ret->next;
        }

        ret->next = nullptr;

        return retHead;
    }
};