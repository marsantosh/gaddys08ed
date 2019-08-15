// this program demonstrates the use of a structure
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayRoll {
    int     empNumber;
    string  name;
    double  hours;
    double  payRate;
};

int main() {
    PayRoll employee;
    double grossPay;

    // get the employee's data
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;

    cout << "Enter the employee's name: ";
    cin.ignore();
    getline(cin, employee.name);

    cout << "Hours worked this week: ";
    cin >> employee.hours;

    cout << "Employee's hourly pay rate: ";
    cin >> employee.payRate;

    // calculate the employee's gross pay
    grossPay = employee.hours * employee.payRate;

    // display the results
    cout << "\nHere is the employee's payroll data:\n";
    cout << "Name               : " << employee.name << endl;
    cout << "Employee Number    : " << employee.empNumber << endl;
    cout << "Hours worked       : " << employee.hours << endl;
    cout << "Hourly pay rate    : " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross pay :        $ " << grossPay << endl;
    
    return 0;
}