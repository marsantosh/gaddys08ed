// this program stores employees hours worked and hourly ay rates
// in vectors
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    // main function
    const int NUM_EMPS = 5;
    vector<int> hours(NUM_EMPS);
    vector<double> payRate(NUM_EMPS);
    double grossPay;
    int index;

    // get employee work data
    cout << "Enter the hours worked and hourly pay rates of "
         << NUM_EMPS << " employees.\n";
    
    for (index = 0; index < NUM_EMPS; index++) {
        cout << "Hours worked by employee # " << (index + 1) << ": ";
        cin  >> hours[index];
        cout << "Hourly pay rate for employee # " << (index + 1) << ": ";
        cin  >> payRate[index];
    }

    // display each employee's gross pay
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPS; index++) {
        grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $ " << setw(7) << grossPay << endl;
    }
    return 0;
}
