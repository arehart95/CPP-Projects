#include <iostream>
using namespace std;

string convertToDays(int num){
    
    
    string weekday;
    switch(num) {
        case 1:
            weekday = "Monday";
            break;
        case 2:
            weekday = "Tuesday";
            break;
        case 3:
            weekday = "Wednesday";
            break;
        case 4:
            weekday = "Thursday";
            break;
        case 5:
            weekday = "Friday";
            break;
        case 6:
            weekday = "Saturday";
            break;
        case 7:
            weekday = "Sunday";
            break;
        default:
            weekday = "Invalid";
    }
    
    return weekday;
}

int main()
{
    int day;
    cin >> day;
    cout << convertToDays(day);
    return 0;
}
