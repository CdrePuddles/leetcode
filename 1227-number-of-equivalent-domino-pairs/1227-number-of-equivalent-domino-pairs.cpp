#include <map>
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ret = 0;
        map<pair<int, int>, int> dict;
        pair<int, int> firstDom;
        //pair<int, int> secondDom;
        int domA = 0;
        int domB = 0;

        for (int i = 0; i < dominoes.size(); i++) {
            domA = dominoes[i][0];
            domB = dominoes[i][1];
            if (domA < domB) {
                firstDom = make_pair(domA, domB);
            } else {
                firstDom = make_pair(domB, domA);
            }

            if (dict.find(firstDom) != dict.end()) {
                dict[firstDom]++;
            } else {
                dict[firstDom] = 1;
            }
        }

        int perm = 0;
        for (auto loop : dict) {
            perm = loop.second;
            ret += (perm * (perm - 1) / 2);
        }

        return ret;
    }
};