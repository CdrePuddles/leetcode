class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                continue;
            } else {
                ret.push_back(nums[i]);
            }
        }
        nums = ret;

        return nums.size();
    }
};