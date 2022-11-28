#include <iostream>
#include <string.h>
using namespace std;

struct DateOfBirth
{
    int date,month,year;
};

struct Student
{
    string name;
    int roll;
    DateOfBirth dob;
};

int main()
{
    Student enroll;
    cout << "Enter name: " << endl;
    cin >> enroll.name;
    cout << "Enter roll number: " << endl;
    cin >> enroll.roll;
    cout << "Enter Date of Birth [DD MM YY] format: " << endl;
    cin >> enroll.dob.date >> enroll.dob.month >> enroll.dob.year;
    
   
    if(enroll.roll > 0) {
        if(enroll.dob.date > 0 && enroll.dob.date <= 31 && enroll.dob.month > 0 && enroll.dob.month <= 12 && enroll.dob.year > 0) {
            cout << "Name : " << enroll.name << endl;
            cout << "RollNo : " << enroll.roll << endl;
            cout << "Date of birth : " << enroll.dob.date << "/" << enroll.dob.month << "/" << enroll.dob.year << endl;
        } else {
            cout << "Invalid date";
        }    
    } else {
        cout << "Invalid roll number";
    }
    
    return 0;
}
