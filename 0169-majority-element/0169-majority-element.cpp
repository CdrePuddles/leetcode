class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        sort(nums.begin(), nums.end());

        return nums[min((nums.size()+1)/2, (nums.size()/2)+1)-1];
    }
};