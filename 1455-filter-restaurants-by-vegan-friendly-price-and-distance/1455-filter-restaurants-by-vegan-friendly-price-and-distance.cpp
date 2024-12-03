class Solution {

public:
    static bool comp(vector<int> & x, vector<int> &y) {
        if (x[1] != y[1]) {
            return x[1] > y[1];
        }

        return x[0] > y[0];
    };
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        int vegan = 0;
        int price = 0;
        int dist = 0;
        vector<vector<int>> list;
        vector<int> ret;

        for (int i = 0; i < restaurants.size(); i++) {
            vegan = restaurants[i][2];
            price = restaurants[i][3];
            dist = restaurants[i][4];

            if (vegan >= veganFriendly && price <= maxPrice && dist <= maxDistance) {
                list.push_back(restaurants[i]);
            }
        }

        sort(list.begin(), list.end(), comp);

        for (auto loop : list) {
            ret.push_back(loop[0]);
        }

        return ret;
    }
};