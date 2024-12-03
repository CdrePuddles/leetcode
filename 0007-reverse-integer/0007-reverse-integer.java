class Solution {
    public int reverse(int x) {
        int ret = 0;
        int n = x;
        while (n != 0) {
            try {
                ret = Math.multiplyExact(ret, 10);
                ret = Math.addExact(ret, n % 10);
            } catch (ArithmeticException e) {
                return 0;
            }
            n = n/10;
        }
        return ret;
    }
}