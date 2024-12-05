class Solution {
public:
    long long coloredCells(int n) {
        long long ret = 1;

        for (int i = 0; i < n; i++) {
            ret += 4*i;
        }

        return ret;
    }
};