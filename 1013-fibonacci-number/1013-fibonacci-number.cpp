class Solution {
public:
    int fib(int n) {
        if (n < 2) {
            return n;
        }

        int ret = 0;
        unordered_map<int, int> dict;
        dict[0] = 0;
        dict[1] = 1;   

        for (int i = 2; i <= n; i++) {
            dict[i] = dict[i-1] + dict[i-2];
        }
        return dict[n];
    }
};