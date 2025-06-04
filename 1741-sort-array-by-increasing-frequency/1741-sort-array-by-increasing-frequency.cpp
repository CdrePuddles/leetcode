class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> counts(201,0);
        for (int num : nums) {
            counts[num+100]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (counts[a+100] == counts[b+100]) {
                return a > b;
            }

            return counts[a+100] < counts[b+100];
        });

        return nums;
    }
};