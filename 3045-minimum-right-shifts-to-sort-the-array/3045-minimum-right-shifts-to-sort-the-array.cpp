class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        unsigned int flag = 0;
        int pivot = -1;
        unsigned int size = nums.size();
        for (int i = 0; i < size-1; i++) {
            if (nums[i] > nums[i+1]) {
                pivot = i+1;
                if (flag) {
                    return -1;
                } else {
                    flag++;
                }
            }
        }
        if (!flag) {
            return 0;
        } else if (pivot == -1 || nums[0] < nums[size-1]) {
            return -1;
        } 

        return size - pivot;

    }
};