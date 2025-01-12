#include <string.h>

class Solution {
public:
    vector<string> cellsInRange(string s) {
        uint firstLet = (int) s[0];
        uint secondLet = (int) s[3];
        uint letter = secondLet - firstLet;
        string word = "";
        vector<string> ret;

        for (int i = 0; i <= letter; i++) {
            for (int j = s[1]; j <= s[4]; j++) {
                word = (((char) (firstLet + i)) + to_string(j-48));
                ret.push_back(word);
            }
        }
        return ret;
    }
};