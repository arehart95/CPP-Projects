#include <iostream>
#include <vigenere.h>
using namespace std;

int main() {

    cout << "Welcome to the encryption/decryption station\n";
    cout << "Please enter your selection\n";
    cout << "1. Encryption\n2. Decryption\n3. Exit" << endl;

    int selection;
    cin >> selection;

    switch (selection) {
        case 1: {
            cout << "Please enter the text you'd like to encrypt: \n";
            string plainText;
            cin >> plainText;
            cout << "Please enter the text you'd like to use for a key: \n";
            string key;
            cin >> key;
            Vigenere encrypt;
            encrypt.makeUpperCase(plainText, key);
            const string newKey = encrypt.generateKey(plainText, key);
            cout << "Generating encrypted text..." << endl;
            cout << encrypt.cipherText(plainText, newKey);
            break;
        }
        case 2: {
            cout << "Please enter the text you'd like to decrypt: \n";
            string cipherText;
            cin >> cipherText;
            cout << "Please enter the text you'd like to use for a key: \n";
            string key;
            cin >> key;
            Vigenere decrypt;
            decrypt.makeUpperCase(cipherText, key);
            const string newKey = decrypt.generateKey(cipherText, key);
            cout << "Generating decrypted text..." << endl;
            cout << decrypt.originalText(cipherText, newKey);
        }
        case 3: {
            break;
        }
        default:
            cout << "Invalid selection\n";
    }
}
