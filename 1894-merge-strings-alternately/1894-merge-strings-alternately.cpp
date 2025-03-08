class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word = "";
        int size1 = word1.size();
        int size2 = word2.size();


        for (int i = 0; i < min(size1, size2); i++) {
            word += word1[i];
            word += word2[i];
        }
        for (int i = min(size1, size2); i < max(size1, size2); i++) {
            if (size1 > size2) {
                word += word1[i];
            } else {
                word += word2[i];
            }
        }

        return word;
    }
};