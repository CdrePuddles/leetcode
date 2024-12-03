#include <map>
#include <stdio.h>
#include <string.h>
class Solution {
public:
    string getHint(string secret, string guess) {
        int len = secret.size();
        int a = 0;
        int b = 0;
        map<char, int> dict;

        for (int i = 0; i < len; i++) {
            if (dict.find(secret[i]) == dict.end()) {
                dict[secret[i]] = 1;
            } else {
                dict[secret[i]]++;
            }
        }

        for (int i = 0; i < len; i++) {      
            if (secret[i] == guess[i]) {
                dict[secret[i]]--;
                a++;
                if (dict[secret[i]] < 0) {
                    b--;
                }
            } else if (dict.find(guess[i]) != dict.end()) {
                if (dict[guess[i]] > 0) {
                    dict[guess[i]]--;
                    b++;
                }
            }
 
        }

        return to_string(a) + "A" + to_string(b) + "B";
    }
};