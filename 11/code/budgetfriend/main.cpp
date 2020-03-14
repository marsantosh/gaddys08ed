// main.cpp
// this program demonstrates a static class member variable
#include <iostream>
#include <iomanip>
#include "budget.h"
using namespace std;

int main() {
    const int N_DIVISIONS = 4;
    double amount;

    // get the budget requests for the divisions and
    // offices
    cout << "Enter the main offic's budget request: ";
    cin >> amount;
    Budget::mainOffice(amount);

    // create the division and auxiliary offices
    Budget divisions[N_DIVISIONS];
    Aux auxOffices[N_DIVISIONS];

    cout << "\nEnter the budget requests for the divisions and "
         << "\ntheir auxiliary offices as prompted:\n";
        
    for (int count = 0; count < N_DIVISIONS; count++) {
        double bud;
        cout << "Division " << (count + 1) << ": ";
        cin >> bud;
        divisions[count].addBudget(bud);
        cout << "Division " << (count + 1) << "'s auxiliary office: ";
        cin >> bud;
        auxOffices[count].addBudget(bud);
    }

    // print the budgets
    cout << setprecision(2);
    cout << showpoint << fixed;
    cout << "Here are the division budget requests:\n";
    for (int count = 0; count < N_DIVISIONS; count++) {
        cout << "\tDivision: " << (count + 1) << "\t\t\t$";
        cout << setw(7);
        cout << divisions[count].getDivBudget() << endl;
        cout << "\tAuxiliary office of division " << (count + 1);
        cout << "\t$ ";
        cout << auxOffices[count].getDivBudget() << endl;
    }

    // print total requests
    cout << "\tTotal Requests (including main office): $ ";
    cout << Budget::getCorpBudget() << endl;
    return 0;
}