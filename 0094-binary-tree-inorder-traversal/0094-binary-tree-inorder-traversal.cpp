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


    vector<int> inorderRecursion(TreeNode* root, vector<int>& res) {
        if (root == nullptr) {
            return res;
        }
        if (root->left == nullptr && root->right == nullptr) {
            res.push_back(root->val);
            return res;
        } 

        inorderRecursion(root->left, res);
        res.push_back(root->val);
        inorderRecursion(root->right, res);
        return res;
    }


public:   
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        vector<int> output;

        output = inorderRecursion(root, res);


        return output;
    }
};