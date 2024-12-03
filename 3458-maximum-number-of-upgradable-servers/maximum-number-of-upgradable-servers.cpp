class Solution {
public:
    int upgradeServer(long long count, long long upgrade, long long sell, long long money) {

        return min(count, (count*sell + money) / (upgrade + sell));
    }
    vector<int> maxUpgrades(vector<int>& count, vector<int>& upgrade, vector<int>& sell, vector<int>& money) {
        vector<int> ret;
        for (int i = 0; i < count.size(); i++) {
            ret.push_back(upgradeServer((long long) count[i], (long long) upgrade[i], (long long) sell[i], (long long) money[i]));
        }

        return ret;
    }


};