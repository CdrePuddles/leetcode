class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ret = 1;
        int maxRet = 1;
        int zeroFromLeft = 0;
        int count = 0;

        for (auto loop : seats) {
            if (loop == 1) {
                break;
            }
            zeroFromLeft++;
        }

        for (auto loop : seats) {
            if (loop == 1) {
                if (count > maxRet) {
                    maxRet = count;
                    ret = maxRet / 2;
                }
                count = 0;
            } 

            count++;
            
        }
        if (count > maxRet / 2) {
            ret = count -1;
        }

        return max(ret, zeroFromLeft);
    }
};