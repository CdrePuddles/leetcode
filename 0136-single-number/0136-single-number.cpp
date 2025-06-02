#include <unordered_map> 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> dict;

        for (int num : nums) {
            dict[num]++;
        }

        for (auto val : dict) {
            if (val.second == 1) {
                return val.first;
            }
        }

        return 0;
    }
};