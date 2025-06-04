class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        for (int i = 0; i <= s.size(); i++) {
            if (s.substr(i, s.size()-1) + s.substr(0, i) == goal) {
                return true;
            }
        }

        return false;
    }
};