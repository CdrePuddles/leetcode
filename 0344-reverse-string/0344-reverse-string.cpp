class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int size = s.size();
        for (int i = 0; i < size / 2; i++) {
            temp = s[i];
            s[i] = s[size-1-i];
            s[size-1-i] = temp;
        }
    }
};