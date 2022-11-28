#include <iostream>
#include <stdio.h>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
   char str[100];
   cout << "Enter your name:\n";
   cin.getline(str, 100);
   
   char array[2][26] = {{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
                        {'1', '2', '3', '4', '5', '8', '3', '5', '1', '1', '2', '3', '4', '5', '7', '8', '1', '2', '3', '4', '6', '6', '6', '5', '1', '7'}};

    bool flag = true;
    int result = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        
        if(str[i] >= 65 && str[i] <= 90) {
            int arrayIndex = str[i] - 65;
            result = result + (array[1][arrayIndex] - '0');
        
        } else {
            flag = false;
            break;
        }
    }
    
    if(flag == true) {
        cout << "Your lucky number is:" << result;
    } else {
        cout << "Invalid name";
    }
  return 0;
}
