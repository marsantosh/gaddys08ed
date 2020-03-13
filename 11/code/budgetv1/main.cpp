// main.cpp
// NOTE:
// Static member variables furnish a good example of the distinction between C++
// declarations and C++ definitions. A declaration provides information about the existence and
// type of a variable or function. A definition provides all the information contained in a
// declaration, and in addition, causes memory to be allocated for the variable or function being
// defined. Static member variables must be declared inside the class and defined outside of it.

// this program demonstrates a static class member var
#include <iostream>
#include <iomanip>
#include "budget.h"
using namespace std;

// definition of the static member of the Budget class
double Budget::corpBudget = 0;

int main() {
    const int N_DIVISIONS = 4;
    Budget divisions[N_DIVISIONS];

    // get the budget requesr for each division
    for (int count = 0; count < N_DIVISIONS; count++) {
        double bud;

        cout << "Enter the budget requests for division";
        cout << (count + 1) << ": ";
        cin >> bud;
        divisions[count].addBudget(bud);
    }

    // display the budget request for each division
    cout << setprecision(2);
    cout << showpoint << fixed;
    cout << "\nHere are the division budget requests:\n";
    for (int count = 0; count < N_DIVISIONS; count++) {
        cout << "Division " << (count + 1) << "\t$";
        cout << divisions[count].getDivBudget() << endl;
    }

    // display the total budget request
    cout << "Total Budget Requests: \t$";
    cout << divisions[0].getDivBudget() << endl;

    return 0;
}