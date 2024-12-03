#include <map>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> dict;
        int size = nums.size();
        int ret = 0;
        int maxVal = -10000000;
        int counter = 0;
        for (int i = 0; i < size; i++) {
            maxVal = max(maxVal, nums[i]);
            if (dict.find(nums[i]) != dict.end()) {
                dict[nums[i]]++;
            } else {
                dict[nums[i]] = 1;
            }
        }

        int i = maxVal;

        while (true) { 
            counter += dict[i];
            if (counter >= k) {
                ret = i;
                break;
            }
            i--;
        }

        return ret;
    }
};