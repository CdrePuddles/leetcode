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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> queue1;
        queue<TreeNode*> queue2;
        vector<double> ret;
        double currentSum = 0;
        int count = 0;

        queue1.push(root);

        while (queue1.size() != 0 || queue2.size() != 0) {      
            while (queue1.size() != 0) {
                TreeNode* currentNode = queue1.front();

                queue1.pop();

                if (currentNode == nullptr) {
                    continue;
                } else {
                    currentSum += currentNode->val;
                    count++;
                    queue2.push(currentNode->left);
                    queue2.push(currentNode->right);                    
                }

            }

            if (count > 0) {
                currentSum = currentSum / count;
                ret.push_back(currentSum);
                count = 0;
                currentSum = 0;
            }

            while (queue2.size() != 0) {
                TreeNode* currentNode = queue2.front();

                queue2.pop();

                if (currentNode == nullptr) {
                    continue;
                } else {
                    currentSum += currentNode->val;
                    count++;
                    queue1.push(currentNode->left);
                    queue1.push(currentNode->right);
                }

            }
            if (count > 0) {
                currentSum = currentSum / count;
                ret.push_back(currentSum);
                count = 0;
                currentSum = 0;
            }

        }
         return ret;
     }

};