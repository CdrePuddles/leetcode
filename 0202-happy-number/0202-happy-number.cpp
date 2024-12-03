class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) {
            return true;
        } else if (n > 1 && n < 5) {
            return false;
        } else {
            int val = n;
            int sum = 0;
            while (val > 0) {
                sum += pow(val % 10, 2);
                val = val / 10;
            }
            return isHappy(sum);
        }

    }
};