#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

int main() {
    const int NUM_MONTHS = 12;
    int choice;
    string name[NUM_MONTHS] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August", "September",
        "October", "November", "December"
    };
    int days[NUM_MONTHS] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31
    };

    cout << "this program will tell you how many days are in any month.\n\n";

    // display the months
    for (int month = 1; month <= NUM_MONTHS; month++)
        cout << setw(2) << month << "  " << name[month - 1] << endl;
    
    cout << "\nEnter the number of the month you want: ";
    cin >> choice;

    // use the choice the user enteed to get the same of
    // the month and it number of days from the arrays
    cout << "The month of " << name[choice - 1] << " has "
         << days[choice - 1] << " days.\n";
    
    return 0;
}