#include <string.h>
class Encrypter {
public:
    unordered_map<char, string> enc;
    unordered_map<string, int> count;

    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        for (int i = 0; i < keys.size(); i++) {
            enc[keys[i]] = values[i];
        }
        for (string& word : dictionary) {
            count[encrypt(word)]++;
        }
    }
    
    string encrypt(string word1) {
        string ret = "";
        for (int i = 0; i < word1.length(); i++) {
            if (enc.find(word1[i]) != enc.end()) {
                ret += enc[word1[i]];
            } else {
                return "";
            }
        } 
        return ret;
    }
    
    int decrypt(string word2) {
        return count[word2];
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */