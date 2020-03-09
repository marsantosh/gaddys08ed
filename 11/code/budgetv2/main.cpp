// this program demonstrates a static class member function
#include <iostream>
#include <iomanip>
#include "budget.h"
using namespace std;

int main() {
    const int N_DIVISIONS = 4;

    // get the budget requests for each division
    cout << "Enter the main office's budget request: ";
    double amount;
    cin >> amount;

    // call the static member function of the budget class
    Budget::mainOffice(amount);

    // create instances of the Budget class
    Budget divisions[N_DIVISIONS];
    for (int count = 0; count < N_DIVISIONS; count++) {
        double bud;

        cout << "Enter the budget request for division";
        cout << (count + 1) << ": ";
        cin >> bud;
        divisions[count].addBudget(bud);
    }

    // display the budget for each division
    cout << setprecision(2);
    cout << showpoint << fixed;
    cout << "\nHere are the division budget requests:\n";
    for (int count = 0; count < N_DIVISIONS; count++) {
        cout << "\tDivision " << (count + 1) << "\t$ ";
        cout << divisions[count].getDivBudget() << endl;
    }

    // print total budget requests
    cout << "Total Requests (including main office): $ ";
    cout << Budget::getCorpBudget() << endl;

    return 0;
}