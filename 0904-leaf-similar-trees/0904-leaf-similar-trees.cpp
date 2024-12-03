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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        return runTree(root1) == runTree(root2);
    }

    vector<int> runTree(TreeNode* root) {
        stack<TreeNode*> myStack;
        vector<int> ret;
        myStack.push(root);
        TreeNode* temp;
        while (!myStack.empty()) {
            temp = myStack.top();
            myStack.pop();
            if (temp == nullptr) {
            } else {
                if (temp->left == nullptr && temp->right == nullptr) {
                    ret.push_back(temp->val);
                } else if (temp->left == nullptr) {
                    myStack.push(temp->right);
                } else if (temp->right == nullptr) {
                    myStack.push(temp->left);
                } else {
                    myStack.push(temp->right);
                    myStack.push(temp->left);
                }
            }
        }
        return ret;
    }
};