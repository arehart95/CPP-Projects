#include <iostream>
#include <string>
using namespace std;

int stringLength(char* str)
{
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {  

    char string[100];
    cin >> string;
   
    cout << stringLength(string);
    
  return 0;
}
