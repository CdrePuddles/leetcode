class Solution {
public:
    double myPow(double x, int n) {
        double val = solve(x, long(n));
        return val;
    }

    double solve(double x, long n) {
        if (n < 0) {
            return solve(1/x, -n);
        }

        if (n == 0) {
            return 1;
        } 

        if (n % 2 == 0) {
            return solve(x*x, n/2);
        } else {
            return x * solve(x*x, n/2);
        }
    }
};