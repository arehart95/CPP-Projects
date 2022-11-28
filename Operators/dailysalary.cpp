#include <iostream>
using namespace std;

int main()
{
    int annual_salary;
    int one_day_salary;
    cout << "Enter annual income(in dollar)" << endl;
    cin >> annual_salary;
    
    one_day_salary = annual_salary / 365;
    
    cout << "One day salary(in dollar) = " << one_day_salary << endl;
    
    return 0;
    
}
