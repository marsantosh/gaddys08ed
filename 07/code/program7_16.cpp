// this program demonstrates a union
#include <iostream>
#include <iomanip>
using namespace std;

union PaySource {
    short hours;
    float sales;
};

int main() {
    const double COMMISSION_PCT = .10;

    PaySource employee1;

    char hourlyType;
    float payRate, grossPay;

    cout << fixed << showpoint << setprecision(2);
    cout << "This program calculates either hourly wages or "
         << "sales commission.\n";
    cout << "Is this an hourlu employee (y or n)? ";
    cin >> hourlyType;

    if (hourlyType == 'y' || hourlyType == 'Y') {
        cout << "What is the hourly pay rate? ";
        cin >> payRate;
        cout << "How many hours were worked? ";
        cin >> employee1.hours;
        grossPay = employee1.hours * payRate;
        cout << "Gross pay: $ " << grossPay << endl;
    }
    else {
        cout << "What are the total sales for this employee? ";
        cin >> employee1.sales;
        grossPay = employee1.sales * COMMISSION_PCT;
        cout << "Gross pay: $ " << grossPay << endl;
    }
    return 0;
}