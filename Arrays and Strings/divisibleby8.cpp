#include <iostream>

using namespace std;


int main()
{
    int x, xBy3;
    cin >> x;
    
    xBy3 = x % 1000;
    
    cout << "Last three digits : " << xBy3 << endl;
    if(xBy3 % 8 == 0) {
        cout << "Number is divisible by 8" << endl;
        
    } else {
       cout << "Number is not divisible by 8" << endl;
    }
   
   return 0; 
}
