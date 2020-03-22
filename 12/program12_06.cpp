// program12_06.cpp
// this program uses a strcmp to comapre the string entered
// by the user with the valid part numbers
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


int main() {
    // price of items
    const double A_PRICE = 49.0, B_PRICE = 69.95;

    // character array for part number
    const int PART_LENGTH = 8;
    char partNum[PART_LENGTH];

    // instruct the user to enter a part number
    cout << "The computer part nubmers are:\n";
    cout << "\tBlu-Ray Disk Drive, part number S147-29A\n";
    cout << "\tWireless Router, part number S147-29B\n";
    cout << "Enter the part number of the item you\n";
    cout << "wish to purchase: ";

    // read a part number of at most 8 characters
    cin >> setw(9);
    cin >> partNum;

    // determine what user entered using strcmp
    // and print its price
    cout << showpoint << fixed << setprecision(2);
    if (strcmp(partNum, "S147-29A") == 0)
        cout << "The price is $" << A_PRICE << endl;
    else if (strcmp(partNum, "S147-29B") == 0)
        cout << "The price is $" << B_PRICE << endl;
    else
        cout << partNum << " is not a valid part number.\n";

    return 0;
}