// this menu dirven program uses an if/else statement to carry
// out the correct set of actions based on the user's menu choice.
#include <iostream>
#include <iomanip>

int main() {
    // constants for membership rates
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE = 60.0;
    const double SENIOR_RATE = 100.0;

    int choice;         // menu choice
    int months;         // number of months
    double charges;     // monthly charges

    // dusplay the menu and get the user's choice
    std::cout << "   Health Club Membership Menu\n\n";
    std::cout << "1. Standard Adult Membership\n";
    std::cout << "2. Child Membership\n";
    std::cout << "3. Senior Citizen Membership\n";
    std::cout << "4. Quit the program\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    // set the numeric output formatting
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    // use menu selection to execute the correct set of actions
    if (choice == 1) {
        std::cout << "For how many months? ";
        std::cin >> months;
        charges = months * ADULT_RATE;
        std::cout << "\nThe total charges are $" << charges << std::endl;
    }
    else if (choice == 2) {
        std::cout << "For how many months? ";
        std::cin >> months;
        charges = months * CHILD_RATE;
        std::cout << "\nThe total charges are $" << charges << std::endl;
    }
    else if (choice == 3) {
        std::cout << "For how many months? ";
        std::cin >> months;
        charges = months * SENIOR_RATE;
        std::cout << "\nThe total charges are $" << charges << std::endl;
    }
    else if (choice != 4) {
        std::cout << "\nThe valid choices are 1 through 4.\n"
                  << "Run the program again and select one of those.\n";
    }
    
    // return success
    return 0;
}