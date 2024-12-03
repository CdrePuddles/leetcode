class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp = 0;
        int rows = matrix.size();
        int columns = matrix[0].size();


        for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++) {
                temp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns / 2; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][columns - 1 - j];
                matrix[i][columns - 1 - j] = temp;
            }
        }

    }
};