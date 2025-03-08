
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int val = INT_MAX;
        int num;

        for (int i = 0; i < nums.size(); i++) {
            num = nums[i];
            if (abs(num) < abs(val)) {
                val = num;
            } else if (abs(num) == abs(val)) {
                val = max(num, val);
            }
        }

        return val;
    }
    
};