class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ret = 0;
        vector<int> newList = heights;
        sort(newList.begin(), newList.end());
        for (int i = 0; i < heights.size(); i++) {
            if (newList[i] != heights[i]) {
                ret++;
            }
        }

        return ret;
    }
};