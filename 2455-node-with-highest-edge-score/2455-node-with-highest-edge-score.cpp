#include <unordered_map>
class Solution {
public:
    int edgeScore(vector<int>& edges) {
        u_int ret = 0;
        int val = 0;
        unordered_map<int, u_int> dict;

        for (int i = 0; i < edges.size(); i++) {
            dict[edges[i]] += i;
        }

        for (auto loop : dict) {
            if (loop.second > ret) {
                ret = loop.second;
                val = loop.first;
            } else if (loop.second == ret && loop.first < val) {
                val = loop.first;
            }
        }

        return val;
    }
};