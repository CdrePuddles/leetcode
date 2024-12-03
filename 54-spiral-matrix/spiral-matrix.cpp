class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bot = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size() -1;
        int cursor = 0;

        vector<int> ret;

        while (left <= right && top <= bot) {
            for (int i = left; i <= right; i++) {
                ret.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bot; i++) {
                ret.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    ret.push_back(matrix[bot][i]);
                }
            }
            bot--;

            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    ret.push_back(matrix[i][left]);
                }
            }
            left++;
        }

        return ret;
    }
};