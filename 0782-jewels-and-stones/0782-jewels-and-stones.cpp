#include<unordered_map>

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jewel;
        unordered_map<char, int> stone;
        int ret = 0;

        for (char val : jewels) {
            jewel[val]++;
        }
        for (char val : stones) {
            stone[val]++;
        }

       

        for (auto val : stone) {
            if (jewel.find(val.first) != jewel.end()) {
                ret += val.second;
            }
        }

        return ret;
    }
};