#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<vector<string>> transArray;
        transArray.resize(transactions.size());
        vector<string> ret;
        string input = "";


        for (size_t i = 0; i < transactions.size(); i++) {
            stringstream ss(transactions[i]);
            while (ss.good()) {                
                string substr;
                getline(ss, substr, ',');
                transArray[i].push_back(substr);
           }
        }
        bool flag = 0;
        for (int i = 0; i < transArray.size(); i++) {
            if (std::stoi(transArray[i][2]) > 1000) {
                flag = 1;
            } else {
                 for (int j = 0; j < transArray.size(); j++) {
                    if (j == i) {
                        continue;
                    }
                    if (transArray[i][0] == transArray[j][0]) {
                        if (fabs(std::stoi(transArray[j][1]) - std::stoi(transArray[i][1])) <= 60) {
                            if (transArray[i][3] != transArray[j][3]) {
                                flag = 1;
                                break;
                            }
                        }
                    }
                }
            } 

            if (flag) {
                input = transArray[i][0] + "," + transArray[i][1] + "," + transArray[i][2] + "," + transArray[i][3];
                ret.push_back(input);
            } 
    
            flag = 0;

        }

       return ret;

    }
};