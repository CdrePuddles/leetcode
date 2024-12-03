class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ret = 0;
        int first = 0;
        for (int i = 0; i < nums.size() -1; i++) {
            first = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (first == nums[j]) {
                    ret++;
                }
            }
        }
        return ret;
    }
};