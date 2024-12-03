class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ret;
        ret.resize(n);
        for (int i = 0; i < n; i++) {
            ret[i].resize(n);
            cout << ret[i].size() << endl;
        }

        int top = 0;
        int left = 0;
        int right = n-1;
        int bot = n-1;

        int val = 1;

        while (top <= bot && left <= right) {
            for (int i = left; i <= right; ++i) {
                ret[top][i] = val++;
            }
            top++;

            for (int i = top; i <= bot; ++i) {
                ret[i][right] = val++;
            }
            right--;

            if (top <= bot) {
                for (int i = right; i >= left; --i) {
                    ret[bot][i] = val++;
                }
                bot--;
            }

            if (left <= right) {
                for (int i = bot; i >= top; --i) {
                    ret[i][left] = val++;
                }
                left++;
            }

        }

        return ret;
        
    }
};