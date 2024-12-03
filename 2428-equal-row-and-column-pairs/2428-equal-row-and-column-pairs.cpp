#include <iostream> 
#include <map>

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> imap;
        map<vector<int>, int> jmap;
        int height = grid.size();
        int width = grid[0].size();
        vector<int> val;
        int ret = 0;

        for (int i = 0; i < height; i++) {
            val = grid[i];
            if (imap.find(val) != imap.end()) {
                imap[val]++;
            } else {
                imap[val] = 1;
            }

            val.clear();

            for (int j = 0; j < width; j++) {
                val.push_back(grid[j][i]);
            }

            if (jmap.find(val) != jmap.end()) {
                jmap[val]++;
            } else {
                jmap[val] = 1;
            }
        }

        for (auto loop : imap) {
            if (jmap.find(loop.first) != jmap.end()) {
                ret += loop.second * jmap[loop.first];
            }
        }

        return ret;
    }
};