class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ret = 0;
        map<int, int> collection;
        for (int i = nums.size()-1; i >= 0; i--) {
            ret++;
            if (nums[i] <= k) {
                if (collection.find(nums[i]) == collection.end()) {
                    collection[nums[i]] = nums[i];
                }
                if (collection.size() == k) {
                    break;
                }
            }
        } 
        
        return ret;
    }
};