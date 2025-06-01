#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        int val = 0;

        for (int i = 0; i < nums.size(); i++) {
            dict[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            val = target - nums[i];
            if (dict.find(val) != dict.end()) {
                if (dict[val] != i) {
                    return {i, dict[val]};
                }
            }
        }

        return {0,0};
    }
};