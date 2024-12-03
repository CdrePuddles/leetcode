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
private:
    int height(TreeNode* root, int node) {
        if (root == nullptr) {
            return -100;
        } else if (root->val == node) {
            return 1;
        } else {
            return 1 + max(height(root->left, node), height(root->right, node));
        }
    }

    int prevParent(TreeNode* root, int node) {
        int ret = 0;
        
        if (root->left == nullptr && root->right == nullptr) {
            return 0;
        } else if (root->left == nullptr) {
            if (root->right->val == node) {
                return root->val;
            } else {
                return prevParent(root->right, node);
            }
        } else if (root->right == nullptr) {
            if (root->left->val == node) {
                return root->val;
            } else {
                return prevParent(root->left, node);
            }
        } else if (root->left->val == node || root->right->val == node)  {
            return root->val;
        } else {
            return max(prevParent(root->left, node), prevParent(root->right, node));
        }
    }

public:
    bool isCousins(TreeNode* root, int x, int y) {
            //cout << prevParent(root, x) <<endl;
            //cout << prevParent(root, y) <<endl;
        if (height(root, x) == height(root, y) && prevParent(root, x) != prevParent(root, y)) {

            return true;
        } else {
            return false;
        }
    }
};