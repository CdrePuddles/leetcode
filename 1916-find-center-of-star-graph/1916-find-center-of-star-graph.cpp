#include <unordered_map>
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map<int, int> dict;

        for (int i = 0; i < n; i++) {
            dict[edges[i][0]]++;
            dict[edges[i][1]]++;
        }

        for (auto num : dict) {
            if (num.second == n) {
                return num.first;
            }
        }

        return 0;
    }
};