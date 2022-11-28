#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()  
{
    string s;
    getline(cin, s);
    
    iter_swap(s.begin(), s.rbegin());
    
    cout << s;
  
    return 0;
    
}
