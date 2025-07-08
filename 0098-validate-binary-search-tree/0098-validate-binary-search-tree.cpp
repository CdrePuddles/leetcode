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
    bool validBSTRecur(TreeNode* root, long lo, long hi) {
        int val = 0;
        if (root == nullptr) {
            return true;
        } else if ((val = root->val) > lo && val < hi) {
            cout << val << endl;
            return validBSTRecur(root->left, lo, val) && validBSTRecur(root->right, val, hi);
        } else {
            return false;
        }
    }


    bool isValidBST(TreeNode* root) {
        if (root == nullptr) {
            return true;
        } else {
            int val = root->val;
            return validBSTRecur(root->left, LONG_MIN, val) && validBSTRecur(root->right, val, LONG_MAX);
        }
    }
};