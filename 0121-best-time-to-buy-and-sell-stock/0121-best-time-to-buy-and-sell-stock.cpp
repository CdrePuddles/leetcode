class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int sell = INT_MIN;
        int lcurr = 0;
        int rcurr = 0;
        int ret = 0;

        for (int i = 0; i < prices.size(); i++) {
            int price = prices[i];
            if (price <= buy) {
                lcurr = i;
                buy = price;
            } else {
                rcurr = i;
                sell = price;
            }

            if (lcurr < rcurr) {
                ret = max(ret, sell - buy);
            } 
        }

        return ret;
    }
};