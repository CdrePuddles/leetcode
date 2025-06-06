#include <unordered_map>
class Solution {
public:
    int fib(int n) {
        if (!n) {
            return n;
        }
        int a = 0;
        int b = 1;
        int c = 0;

        for (int i = 2; i <= n; i++) {
            c = a+b;

            a = b;
            b = c;
        }

        return b;

    }
};