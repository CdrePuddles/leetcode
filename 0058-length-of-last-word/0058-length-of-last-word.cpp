class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length();
        int count = 0;
        bool flag = true;

        for (int i = size-1; i >= 0; i--) {
            if (flag) {
                if (s[i] != ' ') {
                    flag = false;
                } else {
                    continue;
                }
            } else if (s[i] == ' ') {
                break;
            }
            count++;
        }
        return count;

    }
};