#include <unordered_map>
class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b) {

        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ret;
        sort(intervals.begin(), intervals.end(), cmp);
        vector<int> temp = intervals[0];
        vector<int> innerTemp;


        for (int i = 1; i < intervals.size(); i++) {
            innerTemp = intervals[i];
            if (innerTemp[0] <= temp[1] && innerTemp[0] >= temp[0]) {
                temp[1] = max(temp[1], innerTemp[1]);
            } else {
                ret.push_back(temp);
                temp = innerTemp;
            }
        }

         ret.push_back(temp);


        return ret;
    }
};