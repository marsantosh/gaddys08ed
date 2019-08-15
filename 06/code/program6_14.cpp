// this is a modular, menu-driven program that computes
// health club membership fees
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function protoypes
void displayMenu();
int getChoice();
void showFees(string category, double rate, int months);

int main() {
    // constants for monthly membership rates
    const double ADULT_RATE = 120.00,
                 CHILD_RATE = 60.00,
                 SENIOR_RATE = 100.0;
    
    int choice,
        months;
    
    // set numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    do {
        displayMenu();
        choice = getChoice();

        if (choice != 4) {
            cout << "For how many months? ";
            cin >> months;

            switch (choice) {
                case 1: showFees("Adult", ADULT_RATE, months);
                        break;
                case 2: showFees("Child", CHILD_RATE, months);
                        break;
                case 3: showFees("Senior", SENIOR_RATE, months);
                        break;
            }
        }
    } while (choice != 4);

    return 0;
}

/*
 * displayMenu
 */
void displayMenu() {
    // docs
    system("clear");       // clear the screem
    cout << "\n  Health Club Membershuo Menu\n\n";
    cout << "1.  Standard Adult Membership\n";
    cout << "2.  Child Membership\n";
    cout << "3.  Senior Citizen Membership\n";
    cout << "4.  Quit the program\n\n";
}

/*
 * getChoice
 */
int getChoice() {
    // vars
    int choice;

    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "The only valid choices are 1 - 4. Please re-enter. ";
        cin >> choice;
    }
    return choice;
}

/*
 * showFees
 */
void showFees(string memberType, double rate, int months) {
    // show fees
    cout << endl
         << "Membership Type: " << memberType << "     "
         << "Number of months: " << months << endl
         << "Total charges   : $ " << (rate * months) << endl;
    
    // hold the screen until the user presses the ENTER key
    cout << "\nPress the [Enter] key to return to the menu. ";
    cin.get();      // Clear the previous \n out of the input buffer
    cin.get();      // wait for the user to press ENTER

}