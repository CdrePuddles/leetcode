#include <stdio.h>
#include <string.h>
class Solution {
public:
    int maxScore(string s) {
        int len = s.length();
        int sum = 0;
        int ret = 0;
        string word1 = "";
        string word2 = "";


        for (int i = 1; i < len; i++) {
            word1 = s.substr(0, i);
            word2 = s.substr(i, len-1);

            for (int j = 0; j < word1.length(); j++) {
                if (word1[j] == '0') {
                    sum++;
                }
            }
            for (int j = 0; j < word2.length(); j++) {
                if (word2[j] == '1') {
                    sum++;
                }
            }
            ret = max(sum, ret);
            sum = 0;
 
        }

        return ret;
    }
};