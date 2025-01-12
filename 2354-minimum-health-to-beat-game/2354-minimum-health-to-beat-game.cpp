class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        long long sum = 1;
        long long largest = 0;
        for (int& num : damage) {
            sum += num;
            largest = max(largest, (long long) num);
        }
        return sum - min((long long) armor, (long long) largest);
    }
};