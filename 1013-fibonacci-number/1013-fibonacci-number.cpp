#include <unordered_map>
class Solution {
public:
    int fib(int n) {
        unordered_map<int, int> fibMap;
        fibMap[0] = 0;
        fibMap[1] = 1;
        int ret = n;

        for (int i = 2; i <= n; i++) {
            if (fibMap.find(i) != fibMap.end()) {
                ret = fibMap[i];
            } else {
                fibMap[i] = fibMap[i-1] + fibMap[i-2];
                ret = fibMap[i];
            }
        }

        return ret;
    }
};