#include <iostream>
#include <map>

class Solution {
public:
    
    string arrangeWords(string text) {

        text[0] = char(int(text[0])+32);
        stringstream ss(text);
        string temp;
        map<int, vector<string>> dict;

        while (getline(ss, temp, ' ')) {
            dict[temp.size()].push_back(temp);
        }

        string ret;
        for (auto list : dict) {
            for (string val : list.second) {
                ret += val + " ";
            }
        }

        ret.pop_back();

        ret[0] = char(int(ret[0])-32);

        return ret;
    }
};