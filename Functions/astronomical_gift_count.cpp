#include <iostream>
using namespace std;

int countGift(int age){
    
    int gifts;
    
    if (age > 0) {
        if(age % 2 == 0) {
            gifts = age * age * age;
        } else {
            gifts = age * age;
        }
    } else {
        return -1;
    }

    return gifts;
}

int main()
{
    int age;
    cout << "Enter the age: " << endl;
    cin >> age;
    
    cout << countGift(age);
    return 0;
}
