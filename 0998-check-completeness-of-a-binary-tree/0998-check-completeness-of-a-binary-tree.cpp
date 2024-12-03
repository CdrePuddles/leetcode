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
    bool isCompleteTree(TreeNode* root) {

        queue<TreeNode*> queueOut;
        TreeNode* popped = nullptr;
        bool flag = false;

        queueOut.push(root);

        while (queueOut.size() != 0) {

            popped = queueOut.front();
                     queueOut.pop();

            if (popped != nullptr) {
                cout << popped->val << endl;
                queueOut.push(popped->left);
                queueOut.push(popped->right);
            } else {
                flag = true;
            }
            if (flag && popped != nullptr) {
                return false;
            }
        

        }
        return true;
    }
};