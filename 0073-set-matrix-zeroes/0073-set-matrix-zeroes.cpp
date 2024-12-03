class Solution {
public:
    int y = 0;
    int x = 0;
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> dict;
        y = matrix.size();
        x = matrix[0].size();
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                if (!matrix[i][j]) {
                    dict.push_back(make_pair(i, j));
                }
            }
        }

        for (auto item : dict) {
            execute(matrix, item.first, item.second);
        }

    }

    void execute(vector<vector<int>>& matrix, int row, int column) {
        for (int i = 0; i < y; i++) {
            matrix[i][column] = 0;
        }

        for (int i = 0; i < x; i++) {
            matrix[row][i] = 0;
        }
    }
};