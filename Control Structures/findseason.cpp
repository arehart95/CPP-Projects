#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    int month;
    cout << "Enter the month:" << endl;
    cin >> month;
    
    switch(month) {
        case 1:
            cout << "Season:Winter" << endl;
            break;
        case 2: 
            cout << "Season:Winter" << endl;
            break;
        case 3:
            cout << "Season:Spring" << endl;
            break; 
        case 4:
            cout << "Season:Spring" << endl;
            break;
        case 5:
            cout << "Season:Spring" << endl;
            break;
        case 6:
            cout << "Season:Summer" << endl;
            break;
        case 7:
            cout << "Season:Summer" << endl;
            break;
        case 8:
            cout << "Season:Summer" << endl;
            break;
        case 9:
            cout << "Season:Autumn" << endl;
            break;
        case 10:
            cout << "Season:Autumn" << endl;
            break;
        case 11:
            cout << "Season:Autumn" << endl;
            break;
        case 12:
            cout << "Season:Winter" << endl;
            break;
        default:
            cout << "Invalid month";
        
    }
  
  return 0;
}
