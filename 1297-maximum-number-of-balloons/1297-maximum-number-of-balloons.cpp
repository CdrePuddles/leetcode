#include <unordered_map>
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> dict;

        for (char val : text) {
            dict[val]++;
        }

        if (dict.find('b') == dict.end() || dict.find('a') == dict.end() || dict.find('l') == dict.end() || dict.find('o') == dict.end() || dict.find('o') == dict.end() || dict['l'] == 1 || dict['o'] == 1) {
            return 0;
        }

        return min(dict['b'], min(dict['a'], min(dict['l']/2, min(dict['o']/2, dict['n']))));
    }
};