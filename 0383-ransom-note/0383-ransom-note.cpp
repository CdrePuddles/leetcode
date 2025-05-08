#include <unordered_map>
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> dict;

        for (char val : magazine) {
            dict[val]++;
        }

        for (char val : ransomNote) {
            if (dict.find(val) != dict.end()) {
                if (!dict[val]) {
                    return false;
                }
                dict[val]--;
            } else {
                return false;
            }
        }

        return true;
    }
};