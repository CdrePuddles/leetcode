/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> queueOut;
        queue<TreeNode*> queueOut2;

        vector<vector<int>> ret;
        vector<int> innerRet;

        TreeNode* popped = nullptr;
        TreeNode* popped2 = nullptr;


        queueOut.push(root);

        while (queueOut.size() != 0 || queueOut2.size() != 0) {
            while (queueOut.size() != 0) {
                popped = queueOut.front();
                queueOut.pop();

                if (popped == nullptr) {
                    continue;
                }

                innerRet.push_back(popped->val);
                queueOut2.push(popped->left);
                queueOut2.push(popped->right);
            }
                if (innerRet.size() != 0) {
                    ret.push_back(innerRet);
                    innerRet.clear();
                }

            while (queueOut2.size() != 0) {
                popped2 = queueOut2.front();
                queueOut2.pop();

                if (popped2 == nullptr) {
                    continue;
                }

                innerRet.push_back(popped2->val);
                queueOut.push(popped2->left);
                queueOut.push(popped2->right);
            }

                if (innerRet.size() != 0) {
                    ret.push_back(innerRet);
                    innerRet.clear();
                }
        }
        return ret;
    }
};