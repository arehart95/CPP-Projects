#include <iostream>
using namespace std;

int calculateSum(int num){
    
    int digit, sum = 0;
    while (num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num/10;
        
    }
    return sum;
    
}

int main()
{
    int num, result;
    cout << "Enter the number:" << endl;
    cin >> num;
    result = calculateSum(num);
    cout << result;
    return 0;
}
