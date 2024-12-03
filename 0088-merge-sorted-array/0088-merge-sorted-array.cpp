class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int counter = 0;
        sort(nums1.begin(), nums1.end());

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) {
                counter = i;
                break;
            }
        }

        for (int j = 0; j < nums2.size(); j++) {
            nums1[j+counter] = nums2[j];
        }

        sort(nums1.begin(), nums1.end());

    }
};