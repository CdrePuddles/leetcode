#include <stdio.h>
#include <string.h>

class Solution {
public:
    int balancedStringSplit(string s) {
        int size = s.length();
        int letter = 0;
        int ret = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'L') {
                letter++;
            } else {
                letter--;
            }
            if (letter == 0) {
                ret++;
            }
        }

        return ret;
    }
};