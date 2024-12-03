#ifndef VIGENERE_H
#define VIGENERE_H
#include <string>
#include <algorithm>
using namespace std;

class Vigenere {
    string _plainText, _key, _cipherText;
public:
    Vigenere(const Vigenere&) = delete;
    Vigenere() = default;
    ~Vigenere() = default;
    string generateKey(const string& text, string key) {
        this->_key = key;
        this->_plainText = text;
        const int x = text.size();

        for (int i = 0; ; i++) {
            if (x == i)
                i = 0;
            if (key.size() == text.size())
                break;
            key.push_back(key[i]);
        }
        return key;
    }


     string cipherText(const string& text, const string &key) {
        this->_plainText = text;
        string cipherText;

            for (int i = 0; i < text.size(); i++) {
                char c = (text[i] + key[i]) % 26;
                c += 'A';
                cipherText.push_back(c);
            }
            return cipherText;
        }


     string originalText(const string& cipherText, const string &key) {
         this->_cipherText = cipherText;
            string originalText;

            for (int i = 0; i < cipherText.size(); i++) {
                char c = (cipherText[i] - key[i] + 26) % 26;
                c += 'A';
                originalText.push_back(c);
            }
            return originalText;
        }

    void makeUpperCase(string& plainText, string& key) {
        this->_plainText = plainText;
        this->_key = key;
        if (any_of(plainText.begin(), plainText.end(), ::islower)) {
            transform(plainText.begin(), plainText.end(), plainText.begin(), ::toupper);
        }
        if (any_of(key.begin(), key.end(), ::islower)) {
            transform(key.begin(), key.end(), key.begin(), ::tolower);
        }
 }
};
#endif //VIGENERE_H
