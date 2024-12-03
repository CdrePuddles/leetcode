class Solution {
public:
    int minDifference(vector<int>& nums) {
        int size = nums.size();
        if (size < 4) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int smallestDiff = min({
            nums[size-1] - nums[3],
            nums[size-2] - nums[2],
            nums[size-3] - nums[1],
            nums[size-4] - nums[0]
        });

        return smallestDiff;
    }
};