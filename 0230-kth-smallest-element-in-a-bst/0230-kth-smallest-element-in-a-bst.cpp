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
    int ret = INT_MAX;
    vector<int> nums;

    int myFunc(TreeNode* root, int k) {
        if (root->left == nullptr && root->right == nullptr) {
            return root->val;
        } else if (root->right == nullptr) {
            nums.push_back(myFunc(root->left, k));
            return root->val;
        } else if (root->left == nullptr) {
            nums.push_back(myFunc(root->right, k));
            return root->val;
        } else {
            nums.push_back(myFunc(root->left, k));
            nums.push_back(myFunc(root->right, k));
            return root->val;
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        nums.push_back(myFunc(root, k));
        std::sort(nums.begin(), nums.end());
        return nums[(k-1)];
    }
};