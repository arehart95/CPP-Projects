#include <iostream>
using namespace std;
struct Employee
{
    int empid;
    int basicsalary;
    int pf;
    int med;
    float sales;
    
    int calc_Bonus() {
    int bonus;
    if(basicsalary <= 7000 && sales <= 10) 
        bonus = 1500;
    else if (basicsalary <= 7000 && sales >= 10)
        bonus = 1000;
    else if(basicsalary > 7000 && basicsalary <= 15000 && sales <= 10)
        bonus = 2000;
    else if(basicsalary > 7000 && basicsalary <= 15000 && sales >= 10)
        bonus = 4000;
    else if(basicsalary > 15000 && sales <= 10)
        bonus = 2500;
    else if(basicsalary > 15000 && sales >= 10)
        bonus = 4500;
    
    return bonus;
    }
    
    int calc_NetSalary() {
        int netSalary = basicsalary - pf - med;
        return netSalary;
    }
};




int main()
{
    struct Employee emp;
    cout << "Enter the employee id" << endl;
    cin >> emp.empid;
    cout << "Enter the basic salary" << endl;
    cin >> emp.basicsalary;
    cout << "Enter the PF amount" << endl;
    cin >> emp.pf;
    cout << "Ener the med amount" << endl;
    cin >> emp.med;
    cout << "Enter the sales percentage" << endl;
    cin >> emp.sales;
    
    if(emp.empid <= 0 || emp.basicsalary <= 0 || emp.pf <= 0 )
    {
        cout << "Unable to Calculate Salary" << endl;
    }
    else
    {
        int bonus = emp.calc_Bonus();
        int netSalary = emp.calc_NetSalary();
        int totalSalary = netSalary + bonus;
        cout << "Total Salary with Bonus is $" << totalSalary;
    }
    return 0;
}


