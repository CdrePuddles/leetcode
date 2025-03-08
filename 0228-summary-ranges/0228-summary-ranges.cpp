class Solution {
public:
    void comp(vector<string> &ret, string &word, int &l, int &r) {
        if (l != r) {
            word = to_string(l) + "->" + to_string(r); 
            ret.push_back(word);
        } else {
            ret.push_back(to_string(l));
        }
    }

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret;

        if (!nums.size()) {
            return ret;
        }

        int l = nums[0];
        int r = nums[0];
        string word = "";

        for (int num : nums) {
            if (l == num) {
                // we gucci
            } else if (r + 1 == num) {
                r = num;
            } else {
                comp(ret,  word,  l,  r);
                l = num;
                r = num;
            }
        }

        comp(ret,  word,  l,  r);

        return ret;
    }
};