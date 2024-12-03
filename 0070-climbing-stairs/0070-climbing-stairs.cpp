#include <unordered_map>

class Solution {
public:
    unordered_map<int, int> dict;
    int climbStairs(int n) {
        if (n < 2) {
            return 1;
        } else {
            if (dict.find(n) != dict.end()) {
                return dict[n];
            } else {
                dict[n] = climbStairs(n - 1) + climbStairs(n - 2);
            }
            return dict[n];
        }
    }
};