#include <unordered_map>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size() - 1;
        int left = 0;
        int mid = 1;
        int right = size;

        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());

        for (left; left < right; left++) {
            if (left > 0 && nums[left] == nums[left-1]) {
                continue;
            }

            mid = left+1;
            right = size;

            while (mid < right) {
                if (nums[left] + nums[mid] + nums[right] > 0) {
                    right--;
                } else if (nums[left] + nums[mid] + nums[right] < 0) {
                    mid++;
                } else {
                    ret.push_back({nums[left], nums[mid], nums[right]});
                    mid++;

                    while (nums[mid] == nums[mid-1] && mid < right) {
                        mid++;
                    }
                }
            }
        }      

        return ret;
    }
};