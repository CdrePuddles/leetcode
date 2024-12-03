#include <map>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size() / 3;
        map<int, int> dict;
        vector<int> ret;

        for (int num : nums) {
            if (dict.find(num) != dict.end()) {
                dict[num]++;
            } else {
                dict[num] = 1;
            }
        }

        for (auto num : dict) {
            if (num.second > size) {
                ret.push_back(num.first);
            }
        }

        return ret;
    }
};