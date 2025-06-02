#include <unordered_map>
class Solution {
public:
    int minInsertions(string s) {
        int sz = s.size();
        string r = s;
        reverse (r.begin(), r.end());
        vector<vector<int>> dp(sz, vector<int>(sz, -1));

        return sz - memo(sz-1, sz-1, s, r, dp);
    }

private:
    int memo(int i, int j, string& s, string& r, vector<vector<int>>& dp) {
        if (i < 0 || j < 0) {
            return 0;
        } else if (dp[i][j] != -1) {
            return dp[i][j];
        } else if (s[i] == r[j]) {
            return dp[i][j] = 1 + memo(i-1, j-1, s, r, dp);
        } else {
            return dp[i][j] = max(memo(i-1, j, s, r, dp), memo(i, j-1, s, r, dp));
        }
    }
};