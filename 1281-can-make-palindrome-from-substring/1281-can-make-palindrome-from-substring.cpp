#include <unordered_map>
class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int length = s.size();
        vector<vector<int>> counts(length+1, vector<int>(26,0));

        vector<bool> ret(queries.size());

        for (int i = 1; i <= length; i++) {
            for (int j=0; j < 26; j++) {
                counts[i][j] += counts[i-1][j] + (s[i-1]==('a'+j));
            }
        }

        int i = 0;
        for (auto query : queries) {
            int numOdd = 0;
            int left = query[0]+1;
            int right = query[1]+1;
            int k = query[2];

            for (int j = 0; j < 26; j++) {
                int dif = counts[right][j] - counts[left-1][j];
                numOdd += dif % 2;
            }

            ret[i] = (numOdd/2 <= k);
            i++;
        }

        
        return ret;
    }
};