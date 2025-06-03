class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sz = milestones.size();

        if (sz == 1) {
            return 1;
        }

        long long ret;
        long long sum = 0;
        sort(milestones.begin(), milestones.end());

        cout << milestones[0] << endl;

        for (int i = 0; i < sz; i++) {
            
            sum += milestones[i];
        }

        if (sum - milestones[sz-1] >= milestones[sz-1]) {
            return sum;
        } else {
            return (sum - milestones[sz-1])*2+1;
        }
    }
};