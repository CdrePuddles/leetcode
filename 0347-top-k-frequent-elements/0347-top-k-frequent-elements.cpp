#include <unordered_map>
class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        vector<pair<int, int>> myList;
        vector<int> ret;

        for (int num : nums) {
            dict[num]++;
        }

        for (auto key : dict) {
            myList.push_back(key);
        }
        sort(myList.begin(), myList.end(), cmp);

        for (auto key : myList) {
            if (!k) {
                break;
            }
            k--;
            ret.push_back(key.first);
        }

        return ret;
    }
};
