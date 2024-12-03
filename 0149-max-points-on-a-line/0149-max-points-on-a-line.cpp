#include <map>
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ret = 0;
        double x1 = 0;
        double y1 = 0;
        double x2 = 0;
        double y2 = 0;
        int temp = 0;
        double slope = 0;
        map <double, int> dict;
        for (int i = 0; i < points.size() -1; i++) {
            x1 = points[i][0];
            y1 = points[i][1];
            for (int j = i+1; j < points.size(); j++) {
                x2 = points[j][0];
                y2 = points[j][1];

                 if (x2 - x1 == 0) {
                    slope = INT_MAX;
                } else {
                    slope = (y2 - y1) / (x2 - x1);
                }

                if (dict.find(slope) != dict.end()) {
                    dict[slope]++;
                } else {
                    dict[slope] = 1;
                }

                ret = max(ret, dict[slope]);
            }
            dict.clear();
        }

        return ret + 1;
    }
};