#include <unordered_map>
class Solution {
public:
    int func(unordered_map<long, int> &dict, long num) {
        long val = pow(num, 2);
        if (dict.find(val) != dict.end()) {
            return 1 + func(dict, val);
        } else {
            return 1;
        }
    }
    int longestSquareStreak(vector<int>& nums) {
        int ret = -1;
        long val = 0;
        unordered_map<long, int> dict;
        for (int num : nums) {
            dict[num] = 1;
        }

        for (auto item : dict) {
            val = pow(item.first, 2);
            if (dict.find(val) != dict.end()) {
                ret = max(ret, 1 + func(dict, val));
            }
        }

        return ret;
    }
};