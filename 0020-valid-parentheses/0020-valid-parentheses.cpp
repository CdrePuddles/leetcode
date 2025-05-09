class Solution {
public:
    bool isValid(string s) {

        stack<char> left;
        stack<char> right;

        char val;
        char l;
        char r;

        for (char c : s) {
            left.push(c);
        }

        while(!left.empty()) {
            val = left.top();
            left.pop();
            if (val == ')' || val == ']' || val == '}') {
                right.push(val);
            } else if (val == '(' || val == '[' || val == '{') {
                if (right.empty()) {
                    return false;
                }
                l = val;
                r = right.top();
                right.pop();
                if (l+1 != int(r) && l+2 != int(r)) {
                    return false;
                }
            }
        }

        return !right.size();
    }
};