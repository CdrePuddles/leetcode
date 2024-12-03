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
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
            int h = height(root);
            int ret = pow(2, max(h-1, 0)) -1;
            ret += countBot(root, h-1);
            return ret;
        }
    }

    int countBot(TreeNode* root, int h) {
        if (h) {
            return countBot(root->left, h-1) + countBot(root->right, h-1);
        } else {
            if (root == nullptr) {
                return 0;
            } else {
                return 1;
            }
        }
    }

    int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
            return 1 + height(root->left);
        }
    }

/*
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else if (root->left == nullptr && root->right == nullptr) {
            return 1;
        } else if (root->left == nullptr) {
            return 1 + countNodes(root->right);
        } else if (root->right == nullptr) {
            return 1 + countNodes(root->left);
        } else {
            return 1 + countNodes(root->left) + countNodes(root->right);
        }
    }*/
};