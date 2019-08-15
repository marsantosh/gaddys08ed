// this program calculates gross pay.
// it uses global constants
#include <iostream>
#include <iomanip>
using namespace std;

// global constants
const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.00;
const double OT_MULTIPLIER = 1.5;

// function prototypes
double getBasePay(double);
double getOvertimePay(double);

int main() {
    double hours,
           basePay,
           overtimePay = 0.0,
           totalPay;
    
    // get the numbe rof hours worked
    cout << "Hoe many hours did you work? ";
    cin >> hours;

    // get the amunt of base pay
    basePay = getBasePay(hours);

    // get overtime pay, if any
    if (hours > BASE_HOURS)
        overtimePay = getOvertimePay(hours);
    
    // calculate the total pay
    totalPay = basePay + overtimePay;

    // diplay the pay
    cout << setprecision(2) << fixed << showpoint;
    cout << "Base pay     $ " << setw(7) << basePay << endl;
    cout << "Overtime pay $ " << setw(7) << overtimePay << endl;
    cout << "Total pay    $ " << setw(7) << totalPay << endl;
    
    return 0;
}

/*
 * getBasePay
 */
double getBasePay(double hoursWorked) {
    // getBasePay
    // vars
    double basePay;

    if (hoursWorked > BASE_HOURS)
        basePay = BASE_HOURS * PAY_RATE;
    else
        basePay = hoursWorked * PAY_RATE;
    
    return basePay;
}

/*
 * getOvertimePay
 */
double getOvertimePay(double hoursWorked) {
    // vars
    double overtimePay;

    if (hoursWorked > BASE_HOURS)
        overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
    else
        overtimePay = 0.0;
    
    return overtimePay;
}