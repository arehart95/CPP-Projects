#include <iostream>
using namespace std;

class MonthlyExpense
{
    private:
    double household_exp;
    double medical;

    public:
    MonthlyExpense(){}
	
    void setHouseHoldExpense(double houseExp) {
        household_exp = houseExp;
    }
    void setMedicalExpense(double medicalExp) {
        medical = medicalExp;
    }
    double calculateNovemberMonthExpense() {
        return (household_exp + medical);

    }
    double calculateDecemberMonthExpense() {
        return (household_exp + medical);
    }

    double calculateTotalExpense() {
        return (household_exp + medical);
    }

    MonthlyExpense operator +(const MonthlyExpense b) {

        MonthlyExpense expense;
        expense.household_exp = this->household_exp + b.household_exp;
        expense.medical = this->medical + b.medical;
        return expense;
    }
};

int main() {

    MonthlyExpense november;
    MonthlyExpense december;
    MonthlyExpense total_expenses;
    double expenses = 0.0;

    double nov1, nov2, dec1, dec2;

    cout << "Enter the household expenses of November (in $): ";
    cin >> nov1;
    cout << "Enter the medical expenses of November (in $): ";
    cin >> nov2;

    cout << "Enter the household expenses of December (in $): ";
    cin >> dec1;
    cout << "Enter the medical expenses of December (in $): ";
    cin >> dec2;

    november.setHouseHoldExpense(nov1);
    november.setMedicalExpense(nov2);

    december.setHouseHoldExpense(dec1);
    december.setMedicalExpense(dec2);

    expenses = november.calculateNovemberMonthExpense();
    cout << "November expenses: $" << expenses << endl;
    expenses = december.calculateDecemberMonthExpense();
    cout << "December expenses: $" << expenses << endl;

    total_expenses = november + december;

    cout << "Total expenses for November and December: $" << total_expenses.calculateTotalExpense();



    return 0;
}
