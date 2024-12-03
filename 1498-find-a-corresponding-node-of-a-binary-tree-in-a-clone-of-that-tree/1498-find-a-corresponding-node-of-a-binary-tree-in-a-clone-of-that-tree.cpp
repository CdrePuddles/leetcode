/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (cloned == nullptr) {
            return nullptr;
        } else if (cloned->val == target->val) {
            return cloned;
        } else {
            TreeNode* left = getTargetCopy(original, cloned->left, target);
            TreeNode* right = getTargetCopy(original, cloned->right, target);
            if (left == nullptr && right == nullptr) {
                return nullptr;
            } else if (right == nullptr) {
                if (left->val == target->val) {
                    return left;
                }
            } else if (left == nullptr) {
                if (right->val == target->val) {
                    return right;
                }   
            }
        }

        return nullptr;
    }
};