#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> ret;
         int val;
         unordered_map<int, int> dict;
         for (int i = 0; i < nums.size(); i++) {
            dict[nums[i]] = i;
         }

         for (int i = 0; i < nums.size(); i++) {
            val = target - nums[i];
            if (dict.count(val) && dict[val] != i) {
                ret.push_back(i);
                ret.push_back(dict[val]);
                break;
            }
         }



         return ret;
    }
};