#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    char x;
    cout << "Enter the letter" << endl;
    cin >> x;
    
    if (x >= 'A' && x <= 'Z') {
        cout << x << "-" << int(x) << endl;
    } else if (x >= 'a' && x <= 'z') {
        cout << x << "-" << int(x) << endl;
    } else {
        cout << "Invalid" << endl;
    }
        
    return 0;
}
