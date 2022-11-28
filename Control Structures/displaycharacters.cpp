#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    int w, x, y, z;
    
    cout << "Enter the digits:" << endl;
    cin >> w >> x >> y >> z;
    
    // first 
    if (w >= 'a' || w <= 'z') {
        cout << w << "-" << char(w) << endl;
    }
    else if (w >= 'A' || w <= 'Z') {
        cout << w << "-" << char(w) << endl;
    }
    
    // second
    if (x >= 'a' || x <= 'z') {
        cout << x << "-" << char(x) << endl;
    }
    else if (x >= 'A' || x <= 'Z') {
        cout << x << "-" << char(x) << endl;
    }
    
    // third
    if (y >= 'a' || y <= 'z') {
        cout << y << "-" << char(y) << endl;
    }
    else if (y >= 'A' || y <= 'Z') {
        cout << y << "-" << char(y) << endl;
    }
    
    //fourth
    if (z >= 'a' || w <= 'z') {
        cout << z << "-" << char(z) << endl;
    }
    else if (z >= 'A' || z <= 'Z') {
        cout << z << "-" << char(z) << endl;
    }
  
  return 0;
    
}
