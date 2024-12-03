class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int val = 0;

        while (left < right) {
            val = numbers[right] + numbers[left];
            if (val > target) {
                right--;
            } else if (val < target) {
                left++;
            } else {
                return {left + 1, right + 1};
            }
        }
        return {0,0};
    }
};