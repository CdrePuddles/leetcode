class Solution {
    public int fib(int n) {
        if (n == 0) {
            return 0;
        }
        int old = 0;
        int newy = 1;
        int hold = old;

        for (int count = 1; count < n; count++) {
            //ans = old + newy;
            hold = old + newy; 
            old = newy;
            newy = hold;
        }

        return newy;
    }
}