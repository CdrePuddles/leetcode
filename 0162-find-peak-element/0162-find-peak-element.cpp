class Solution {
private:
    int binarySearch(vector<int>& nums, int lo, int hi) {
        bool flag1 = false;
        bool flag2 = false;
        int low = lo;
        int high = hi;
        int mid = 0;

        int size = nums.size();
        while (low < high) {
            mid = low + (high - low) / 2;
            if (mid-1 < 0) {
                flag1 = true;
            }
            if (mid+1 >= size) {
                flag2 = true;
            }
            if ((flag1 || nums[mid] >= nums[mid-1]) && (flag2 || nums[mid] >= nums[mid+1])) {
                return mid;
            } else {
                flag1 = false;
                flag2 = false;
                high = mid;
            }
        }
       flag1 = false;
       flag2 = false;

       high = hi;
       low = lo;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid-1 < 0) {
                flag1 = true;
            }
            if (mid+1 >= size) {
                flag2 = true;
            }
            if (mid >= size) {
                mid = size-1;
            }
            if ((flag1 || nums[mid] >= nums[mid-1]) && (flag2 || nums[mid] >= nums[mid+1])) {
                return mid;
            } else {
                flag1 = false;
                flag2 = false;
                low = mid + 1;
            }
        }
        return mid;
    }

public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        int lo = 0, hi = size - 1;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] > nums[mid + 1]) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        return lo;

       // return binarySearch(nums, 0, size-1);
        
    }
};