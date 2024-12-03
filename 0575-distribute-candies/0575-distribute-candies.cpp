class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size();
        int ret = 0;
        unordered_map<int, int> dict;

        for (int i = 0; i < size; i++) {
            if (dict.find(candyType[i]) == dict.end()) {
                dict[candyType[i]] = i;
            }
        }
        for (auto loop : dict) {
            ret++;
            if (ret == size / 2) {
                break;
            }

        }

        return ret;
    }
};