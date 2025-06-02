#include <unordered_map>
class Solution {
public:
    int fib(int n) {
        unordered_map<int, int> fibMap;
        fibMap[0] = 0;
        fibMap[1] = 1;

        for (int i = 2; i <= n; i++) {
            if (fibMap.find(i) != fibMap.end()) {
            } else {
                fibMap[i] = fibMap[i-1] + fibMap[i-2];
            }
        }

        return fibMap[n];
    }
};