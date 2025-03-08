class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = INT_MAX;
        int r = INT_MIN;
        int lcur = 0;
        int rcur = 0;
        int price = 0;
        int ret = 0;

        for (int i = 0; i < prices.size(); i++) {
            price = prices[i];
            if (price <= l) {
                l = price;
                lcur = i;
            } else {
                r = price;
                rcur = i;
            }
            if (lcur < rcur) {
                ret = max(ret, r - l);
            }
        }

        return ret;
    }
};