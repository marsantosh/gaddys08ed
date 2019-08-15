// this program produces a loan amortization table
// for the central mountain credit union
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // vars
    double loan,
           rate,
           moInterestRate,
           years,
           balance,
           term,
           payment;
    int    numPayments;

    // get loan infor
    cout << "Loan amount: $ ";
    cin >> loan;

    cout << "Annual interest rate (entered as a decimal): ";
    cin >> rate;
    cout << "Years of loan: ";
    cin >> years;

    // calculate monthly payment
    numPayments = static_cast<int>(12 * years);
    moInterestRate = rate / 12.0;
    term = pow((1 + moInterestRate), numPayments);
    payment = (loan * moInterestRate * term) / (term - 1.0);

    // display monthly payment
    cout << fixed << showpoint << setprecision(2);
    cout << "Monthly payment: $ " << payment << endl;

    // display report header
    cout << endl;
    cout << setw(5) << "Month" << setw(10) << "Interest";
    cout << setw(10) << "Principal" << setw(9) << "Balance" << endl;
    cout << "-----------------------------------\n";

    balance = loan;         // remaining balance starts out as a full loan amount

    // produce a lusting for each month
    for (int month = 1; month <= numPayments; month++) {
        double moInterest,
               principal;
        
        // calculate amount paid for this month's interest and principal
        moInterest = moInterestRate * balance;
        if (month != numPayments)
            principal = payment - moInterest;
        else {
            principal = balance;
            payment = balance + moInterest;
        }

        // calculate new loan balance
        balance -= principal;

        // display this month's payment figures
        cout << setw(4) << month << setw(10) << moInterest;
        cout << setw(10) << principal << setw(10) << balance << endl;
    }
    return 0;
}