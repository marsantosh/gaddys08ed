#include <iostream>
using namespace std;

int main() {
    double basePayRate = 18.25,
           overtimePayRate = 27.38,
           regularHours = 40.0,
           overtimeHours = 10,
           regularWages,
           overtimeWages,
           totalWages;
    
    // calculate regular wages
    regularWages = basePayRate * regularHours;

    // calculate overtime wages
    overtimeWages = overtimePayRate * overtimeHours;

    // calculate total wages
    totalWages = regularWages + overtimeWages;

    // display total wages
    cout << "WAges for this week are $" << totalWages << endl;
    return 0;
}