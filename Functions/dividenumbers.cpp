#include <iostream>
using namespace std;

int divideNumbers(int num){
    int new_num;
    int x = num % 10;
    int y = num / 10;
    
    new_num = y / x;
    
    return new_num;
    
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num; 
    cout << divideNumbers(num);
    
    return 0;
}
