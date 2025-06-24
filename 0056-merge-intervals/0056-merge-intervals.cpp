class Solution {
private: 
    static bool cmp(vector<int> &a, vector<int> &b) {
            return a[0] < b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ret;
        sort(intervals.begin(), intervals.end(), cmp);
        int first = intervals[0][0];
        int last = intervals[0][1];

        for (int i = 1; i < intervals.size() ; i++) {

            if (intervals[i][0] <= last && intervals[i][1] >= first) {
                first = min(first, intervals[i][0]);
                last = max(last, intervals[i][1]);
            } else {
                ret.push_back({first, last});
                first = intervals[i][0];
                last = intervals[i][1];
            }
        }

        ret.push_back({first, last});
        return ret;
    }
};