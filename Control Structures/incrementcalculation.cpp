#include <iostream>
using namespace std;


int main()   
{
    int salary;
    int appraisedSalary = 0;
    float appraisalRating;
    
    cout << "Enter the salary" << endl;
    cin >> salary;
    
    cout << "Enter the Performance appraisal rating" << endl;
    cin >> appraisalRating;
    
    if (appraisalRating >= 1 && appraisalRating <= 3) {
        appraisedSalary += salary * .10 + salary;
        cout << appraisedSalary << endl;
    } else if (appraisalRating >= 3.1 && appraisalRating <= 4) {
        appraisedSalary += salary * .25 + salary;
        cout << appraisedSalary << endl;
    } else if (appraisalRating >= 4.1 && appraisalRating <= 5) {
        appraisedSalary = salary * .30 + salary;
        cout << appraisedSalary << endl;
    } else {
        cout << "Invalid Input" << endl;
        
    }
  
  return 0;
    
}
