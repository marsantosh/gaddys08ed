// this program uses relational operators to compare a string
// entered by the user with valid stereo part numbers
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // const and vars
    const double PRICE_A = 249.0,
                 PRICE_B = 199.0;
    
    string partNum;

    // display available parts and get the user's selection
    cout << "The stereo part number are:\n";
    cout << "Boom Box     : part number S-29A \n";
    cout << "Shelf Model  : part number S-29B \n";
    cout << "Enter the part number of the stereo you\n";
    cout << "wish to purchase: ";
    cin >> partNum;

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // determine and display the correct price
    if (partNum == "S-29A")
        cout << "The price is $" << PRICE_A << endl;
    else if (partNum == "S-29B")
        cout << "Te price is $" << PRICE_B << endl;
    else
        cout << partNum << " is not a valid part number.\n";
    return 0;
}