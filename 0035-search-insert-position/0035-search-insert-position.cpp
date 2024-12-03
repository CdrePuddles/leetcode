class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int val = 0;
        int lo = 0; 
        int mid = 0;
        int hi = size-1;

        while (lo <= hi) {
            mid = (hi+lo) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return lo;
    }
};