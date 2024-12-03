#include <math.h>
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int val = 0;
        int time = logs[0][1];
        int id = logs[0][0];
        int tempId = 0;
        for (int i = 1; i < logs.size(); i++) {
            tempId = logs[i][0];
            val = logs[i][1] - logs[i-1][1];
            if (val > time) {
                id = tempId;
                time = val;
            } else if (val == time) {
                id = min(id, tempId);
            }
        }
        return id;
    }
};