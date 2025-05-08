#include <map>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> dict;

        for (int num : nums) {
            dict[num]++;
        }

        int ret = 0;
        int count = 0;
        int prev = 0;

        for (auto val : dict) {
            ret = max(ret, count);

            if (val.first == prev + 1) {
                count++;
            } else {
                count = 1;
            }
            prev = val.first;

        }

        ret = max(ret, count);

        return ret;
    }
};