class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i = 0; i < 46341; i++) {
            if (pow(i, 2) == num) {
                return true;
            } if (pow(i, 2) > num) {
                return false;
            }
        }

        return false;
    }
};