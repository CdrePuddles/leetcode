class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ret;
        int size = nums.size();
        ret.resize(size);
        int l = 0;
        int r = size-1;
        int val = 0;
        
        for (int i = 0; i < size; i++) {
            if (fabs(nums[l]) >= fabs(nums[r])) {
                val = pow(nums[l], 2);
                l++;
            } else {
                val = pow(nums[r], 2);
                r--;
            }

            ret[size-1-i] = val;
        }


        return ret;
    }
};