class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int inc = k;
        for (int loop : nums) {
            if (loop == 1 && inc < k) {
                return false;

            } else if (loop == 1) {
                cout << inc << endl;
                inc = 0;

            } else {
                inc++;
            }

        }

        return true;
    }
};