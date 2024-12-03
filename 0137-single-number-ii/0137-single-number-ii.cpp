#include <unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> dict;

        for (int num : nums) {
            dict[num]++;
        }

        for (auto pair : dict) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return 0;
    }  
};