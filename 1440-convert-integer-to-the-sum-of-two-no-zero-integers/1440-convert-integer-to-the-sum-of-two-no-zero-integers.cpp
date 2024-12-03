class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ret;
        int a = 0;
        int b = 0;
        int valA = 0;
        int valB = 0;
        bool flag = true;


        for (int i = 1; i <= n; i ++) {
            a = i;
            b = n - i;
            valA = a;
            valB = b;
            while (valA > 0 || valB > 0) {
                flag = true;
                if (valA % 10 != 0) {
                    valA = valA / 10;
                } else if (valA == 0) {

                } else {
                    flag = false;
                    break;
                }
                if (valB % 10 != 0) {
                    valB = valB / 10;
                } else if (valB == 0) {

                } else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
            ret.push_back(a);
            ret.push_back(b);
            return ret;
    }
};