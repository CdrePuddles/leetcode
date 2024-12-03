#include <map>
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ret = 0;
        long long sum = 0;
        int size =  nums.size();
        int cursor = 0;
        int val = 0;
        map<int, int> dict;

        for (int i = 0; i < size; i++) {
            val = nums[i];
            if (val == 0) {
                cursor++;
            }
            if (!cursor) {
                //
            } else if (val != 0 || i+1 == size) {
                if (dict.find(cursor) != dict.end()) {
                    ret += dict[cursor];
                } else {
                    for (cursor; cursor > 0; cursor--) {
                        sum += cursor;
                    }
                    ret += sum;
                    dict[cursor] = sum;
                }
                sum = 0;
                cursor = 0;
            }
        }
        return ret;
    }
};