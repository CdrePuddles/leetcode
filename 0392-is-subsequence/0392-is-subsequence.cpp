class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) {
            return false;
        } 

        int cursor = 0;

        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[cursor]) {
                cursor++;
            }
        }

        return cursor == s.size();
    }
};