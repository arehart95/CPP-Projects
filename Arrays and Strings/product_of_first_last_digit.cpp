#include <iostream>
#include <sstream>
#include <array>
using namespace std;



int main()   
{
    string number = " ";
    int value, firstNum, lastNum;
    stringstream ss, ss2;
    cin >> number;
   
    
    ss << number[0];
    ss >> firstNum;
    
    ss2 << number[(number.length() - 1 )];
    ss2 >> lastNum;
    
    
    cout << firstNum * lastNum;
    
    return 0;
}
