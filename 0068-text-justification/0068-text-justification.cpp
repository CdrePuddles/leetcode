#include <math.h>
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ret;
        ret.push_back(words[0]); // because we know words is greater than size 0
        int size = words.size();
        int wordSize = 0;
        int counter = 0;

        for (int i = 1; i < size; i++) {
            wordSize = words[i].length() + 1; // we are doing + 1 as a space needs to be accounted for

            if (ret[counter].length() + wordSize <= maxWidth) {
                ret[counter].append(" ");
                ret[counter].append(words[i]);
            } else {
                counter++;
                ret.push_back(words[i]);
            }
        }

        string phrase = "";
        volatile int len = 0;

        for (int i = 0; i < ret.size(); i++) {
            if (i + 1 == ret.size() || ret[i].find(" ") == string::npos) {
                while (ret[i].length() < maxWidth) {
                    ret[i].append(" ");
                }
            } else {
                while (ret[i].length() < maxWidth) {
                    int j = 0;
                    while (j < ret[i].length()) {
                        cout << ret[i].length() << endl;
                        if (ret[i].length() >= maxWidth) {
                            break;
                        }
                    
                        if (ret[i][j] == ' ') {
                            phrase = ret[i].substr(0, j);
                            phrase.append(" ");
                            phrase.append(ret[i].substr(j, ret[i].length() - j));
                            ret[i] = phrase;
                            while (true) {
                                if (ret[i][j] == ' ') {
                                    j++;
                                } else {
                                    break;
                                }
                            }
                        }
                        j++;
                    }
                }
            }
        }

        return ret;
    }


};