#include <map>

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, string> dict;
        for (auto loop : paths) {
            dict[loop[0]] = loop[1];
        }
        string dest = paths[0][0];
        while (dict.find(dest) != dict.end()) {
            dest = dict[dest];
        }
        return dest;
    }
};