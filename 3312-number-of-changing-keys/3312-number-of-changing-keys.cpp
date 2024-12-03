class Solution {
public:
    int countKeyChanges(string s) {
        int size = s.length();
        int ret = 0;

        for (int i = 0; i < size-1; i++) {
            //char c1 = (char) std::tolower(s[i]);
            //char c2 = (char) std::tolower(s[i+1]);

            if (std::tolower(s[i]) != std::tolower(s[i+1])) {
                ret++;
            }
        }
        return ret;
    }
};