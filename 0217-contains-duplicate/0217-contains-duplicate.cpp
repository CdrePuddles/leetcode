#include<unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;

         for (int num : nums) {
            if (dict.find(num) != dict.end()) {
                return true;
            }
            dict[num]++;
         }

        return false;
    }
};