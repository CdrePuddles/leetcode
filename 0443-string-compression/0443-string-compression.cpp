class Solution {
public:
    int compress(vector<char>& chars) {
        int ret = 0;
        vector<char> temp;
        int tally = 0;
        char prev = chars[0];

        for (char c : chars) {
            if (c == prev) {
                tally++;
            } else {
                temp.push_back(prev);
                if (tally > 1) {
                    for (char v : to_string(tally)) {
                        temp.push_back(v);
                    }
                }

                prev = c;
                tally = 1;
            }
        }
        
        temp.push_back(prev);
        if (tally > 1) {
            for (char v : to_string(tally)) {
                temp.push_back(v);
            }
        }
        chars = temp;

        return temp.size();
    }
};