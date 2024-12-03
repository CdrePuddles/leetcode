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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> levelQueue;
        queue<TreeNode*> secondQueue;
        TreeNode* currentNode;
        int maxValue = INT_MIN;
        vector<int> ret;

        if (root == nullptr) {
            return ret;
        }

        levelQueue.push(root);

        while (levelQueue.size() > 0) {
            int size = levelQueue.size();
            while (size-->0) {
                currentNode = levelQueue.front();
                levelQueue.pop();

                maxValue = max(currentNode->val, maxValue);

                if (currentNode->left != nullptr) {
                    levelQueue.push(currentNode->left);
                }
                if (currentNode->right != nullptr) {
                    levelQueue.push(currentNode->right);
                }
            }
            ret.push_back(maxValue);
            maxValue = INT_MIN;
        }
        return ret;

    }
};