class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int lo = 1;
        int hi = nums[size-1];
        


        while(lo<=hi) {
            int mid = (lo + hi) / 2;
            int sum = 0;

            for (int i =0; i < size; i++) {
                sum += (nums[i] + mid - 1) / mid;
            }

            if (sum <= threshold) {
                hi = mid-1;
            } else {
                lo = mid +1;
            }
        }

        return lo;

    }
};