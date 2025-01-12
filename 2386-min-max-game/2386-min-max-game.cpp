class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        vector<int> ret;
        int count = 0;
        if (nums.size() == 1) {
            return nums[0];
        }
        
        for (int i = 0; i < nums.size()-1; i+=2) {
            if (count % 2 == 0) {
                ret.push_back(min(nums[i], nums[i+1]));
            } else {
                ret.push_back(max(nums[i], nums[i+1]));
            }
            count++;
        }

        return minMaxGame(ret);
    }
};