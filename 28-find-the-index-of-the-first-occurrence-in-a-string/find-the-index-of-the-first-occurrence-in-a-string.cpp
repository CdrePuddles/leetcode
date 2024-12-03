class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = needle.length();
        int stackSize = haystack.length();

        if (stackSize < size) {
            return -1;
        }

        for (int i = 0; i < stackSize - size +1; i++) {
            if (haystack.substr(i, size) == needle) {
                return i;
            }
        }
        return -1;
    }
};