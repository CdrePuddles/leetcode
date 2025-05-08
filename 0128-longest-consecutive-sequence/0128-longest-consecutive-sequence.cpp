#include <unordered_set>

class Solution {
public:
    // unordered_map<int, int> parent;

    // int find(int x) {
    //     if (parent[x] != x) {
    //         return find(parent[x]);
    //     } else {
    //         return x;
    //     }
    // }

    // void unionFunc(int x, int y) {
    //     parent[find(y)] = find(x);
    // }

    int longestConsecutive(vector<int>& nums) {
        int ret = 0;
        int count = 0;
        unordered_set<int> parent(nums.begin(), nums.end());
        //unordered_map<int, vector<int>> sequences;

        for (int num : parent) {
            if (parent.find(num - 1) == parent.end()) {
                count = 0;
                while (parent.find(num + count) != parent.end()) {
                    count++;
                }
                ret = max(ret, count);
            } 
        }

        return ret;
    }   
};