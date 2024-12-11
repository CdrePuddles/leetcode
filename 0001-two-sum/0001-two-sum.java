class Solution {
    public int[] twoSum(int[] nums, int target) {
        //int[] myNums = nums;
        int listLen = nums.length;
        for (int i = 1; i < listLen; i++) {
            for (int j = i; j < listLen; j++) {
                if (target == (nums[j] + nums[j-i])) {
                    return new int[] {j, j-i};
                }

            }
        }
        return null;
    }
}