class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sz = milestones.size();

        if (sz == 1) {
            return 1;
        }

        long long sum = 0;
        long long hival = 0;
        long long val = 0;

        for (int i = 0; i < sz; i++) {
            val = milestones[i];
            sum += val;
            hival = max(hival, val);
        }

        if (sum -hival >= hival) {
            return sum;
        } else {
            return (sum - hival)*2+1;
        }
    }
};