/*	Practice using the static keyword. Hopefully I implemented it correctly. The prinicpal's name is to be the same for all object's of the Student
  	class.  Then the program requires the student's ID, name, and 5 grades after which it will calculate the average as well as the letter grade earned.
*/

#include <iostream>
#include <string>
using namespace std;

class College
{
    private:
    static string principal_name;

    public:

    void setPrincipalName(string name)
    {
        this->principal_name = name;
    }
    string getPrincipalName()
    {
        return principal_name;
    }

};

string College::principal_name = "Jonathan Adanis";

class Student
{
    private:
    int ID;
    string name;
    float marks[5];
    float average;
    char grade;
    College cObj;

    public:
    void getStudentDetails();
    float calculateAverage();
    char findGrade();
    void displayStudentDetails();

    void setID(int ID)
    {
        this->ID = ID;
    }
    int getID()
    {
        return ID;
    }

    void setName(string n)
    {
        this->name = n;
    }
    string getName()
    {
        return name;
    }

    void setMarks(float m[])
    {
        for (int i = 0; i < 5; i++)
            this->marks[i] = m[i];
    }
    float* getMarks()
    {
        return marks; // use a return type of float pointer to return the address of the array
    }
    College getCollegeObject()
    {
        return cObj;
    }
};

void Student::getStudentDetails()
{
    cout << "Enter Student ID: " << endl;
    cin >> ID;
    cout << "Enter Student name: " << endl;
    cin >> name;
    cout << "Enter the grades earned for each subject: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
}

float Student::calculateAverage()
{
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum = sum + marks[i];
    }
    average = sum / 5;

    return average;

}

char Student::findGrade()
{
    if (average <= 100 && average >= 90)
        grade = 'A';
    else if (average <= 89 && average >= 80)
        grade = 'B';
    else if (average <= 79 && average >= 70)
        grade = 'C';
    else if (average <= 69 && average >= 65)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}

void Student::displayStudentDetails()
{
    cout << "Student name: " << name << endl;
    cout << "Student ID: " << ID << endl;
    cout << "Principal Name: " << cObj.getPrincipalName() << endl;
    cout << "Average: " << calculateAverage() << endl;
    cout << "Grade: " << findGrade() << endl;
}
int main()
{

    Student student1;
    student1.getStudentDetails();
    student1.displayStudentDetails();


    return 0;
}

