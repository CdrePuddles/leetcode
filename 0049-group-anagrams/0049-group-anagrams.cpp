#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;

        if (!strs.size()) {
            return ret;
        }

        string word = "";
        unordered_map<string, vector<string>> dict;

        for (string s : strs) {
            word = s;
            sort(word.begin(), word.end());
            dict[word].push_back(s);
        }

        for (auto item : dict) {
            ret.push_back(item.second);
        }

        return ret;
    }
};