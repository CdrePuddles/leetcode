class Solution {
public:
    int findComplement(int num) {
        int ret = 0;
        vector<int> binary;
        
        if (num == 1) {
            return 0;
        } else if (num == 0) {
            return 1;
        }
        while (num > 0) {
            binary.push_back(!(num % 2));
            num = num / 2;
        }
        for (int i = 0; i < binary.size(); i++) {
            ret += binary[i] * pow(2, i);

        }
        return ret;
    }
};