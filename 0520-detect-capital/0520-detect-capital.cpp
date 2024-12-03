class Solution {
public:
    bool detectCapitalUse(string word) {
        bool firstCapital = false;
        bool allCapital = false;
        bool lowerCase = false;
        if (word.length() == 1) {
            return true;
        }
        for (int i = 0; i < word.length(); i++) {
            if (i == 0 && int(word[i]) <= 90) {
                firstCapital = true;
            } else if (int(word[i]) <= 90) {
                if (lowerCase) {
                    return false;
                }
                allCapital = true;
            } else if (allCapital) {
                return false;
            } else {
                allCapital = false;
                lowerCase = true;
            }
        }
        return true;
    }
};