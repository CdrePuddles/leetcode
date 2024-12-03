class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        bool flag = 0;
        vector<bool> ret;
        for (int i = 0; i < candies.size(); i++) {
            maxCandy = candies[i] + extraCandies;
            for (int j = 0; j < candies.size(); j++) {
                if (maxCandy < candies[j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                ret.push_back(false);
                flag = 0;
            } else {
                ret.push_back(true);
            }
        }

        return ret;
    }
};