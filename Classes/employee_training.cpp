#include <iostream>
#include <string>
using namespace std;

/* 	My first class! It essentially asks for an ID, name, and the number of days in training and then outputs the worker's
	training status. This doesn't use a explicit constructor and it's very simple but OOP is starting to click with
	this so I am really happy to feel myself progressing. */


class Employee {

private:

    int associateID;
    string associateName;
    string workStatus;

public:

    int getAssociateID() {
        return associateID;
    }

    void setAssociateID(int empID) {
        associateID = empID;
    }

    string getAssociateName() {
        return associateName;
    }

    void setAssociateName(string empName) {
        associateName = empName;
    }

    string getWorkStatus() {
        return workStatus;
    }

    void setWorkStatus(string status) {
        workStatus = status;
    }

    void updateStatusDetails(int days) {
        if (days <= 20)
            setWorkStatus("Core skills");
        else if (days > 20 && days <= 40)
            setWorkStatus("Advanced modules");
        else if (days > 40 )
            setWorkStatus("Project phase");
    }

};

int main()
{
    Employee empObj;

    int empID;
    string empName;
    int days;

    cout << "Enter the associate ID: " << endl;
    cin >> empID;

    cout << "Enter the associate Name: " << endl;
    cin >> empName;

    cout << "Enter the number of days: " << endl;
    cin >> days;

    empObj.setAssociateID(empID);
    empObj.setAssociateName(empName);
    empObj.updateStatusDetails(days);

    cout << "The associate " << empObj.getAssociateName() << "'s work status is: " << empObj.getWorkStatus();



    return 0;
}
