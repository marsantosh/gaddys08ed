// this program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // consts and vars
    const double PAY_RATE = 50.0;
    const int MIN_HOURS = 5;
    double hours;
    double charges;

    // get hours worked
    cout << "Hoe many hours were worked? ";
    cin >> hours;

    // getermine how many hours to charge for
    hours = hours < MIN_HOURS ? MIN_HOURS : hours;

    // calculate and display the charges
    charges = PAY_RATE * hours;
    cout << fixed << showpoint << setprecision(2)
         << "The charges are $" << charges << endl;
    
    return 0;
}