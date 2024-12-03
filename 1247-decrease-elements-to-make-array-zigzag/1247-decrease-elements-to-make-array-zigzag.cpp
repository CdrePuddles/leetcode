class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        vector<int> nums1 = nums;
        vector<int> nums2 = nums;

        int size = nums.size();
        int counter1 = 0;
        int counter2 = 0;

        if (size < 3) {
            return 0;
        }

        for (int i = 0; i < size-1; i = i+2) {
            while (nums1[i] <= nums1[i+1]) {
                nums1[i+1]--;
                counter1++;
            }
            if (i + 2 < size) {
                while (nums1[i+2] <= nums1[i+1]) {
                    nums1[i+1]--;
                    counter1++;
                }                 
            }

        }

        cout << size << endl;

        for (int i = 1; i < size; i = i+2) { 
            while (nums2[i-1] >= nums2[i]) {
                nums2[i-1]--;
                counter2++;
            }
            cout << i << endl;
            if (i + 1 < size) {
                while (nums2[i+1] >= nums2[i]) {
                nums2[i+1]--;
                counter2++;
                }
            }

        }

        /*
        for (int i = 0; i < size-2; i = i+2) { 
            while (nums2[i] >= nums2[i+1]) {
                nums2[i]--;
                counter2++;
            }
            while (nums2[i+2] >= nums2[i+1]) {
                nums2[i+2]--;
                counter2++;
            }
            cout << nums2[i] << " " << nums2[i+1] << " " << nums2[i+2] << endl;
        }
        */
        return min(counter1, counter2);

    
    }
};