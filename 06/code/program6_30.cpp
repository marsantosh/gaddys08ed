// this program is a driver for tesitnf the showFees function
#include <iostream>
#include <string>
using namespace std;

/ function prorotype
void showFees(string, double, int);

int main() {
    // main function
    cout << "Calling the showFees function with arguments ";
    cout << "Adult, 120.0, 3.\n";
    showFees("Adult", 120.0, 3);

    cout << "Calling the showFees function with arguments ";
    cout << "Child, 60.0, 2.\n";
    showFees("child", 60.0, 2);

    cout << "Calling the showFees function with arguments ";
    cout << "Senior, 100.0, 4.\n";
    showFees("Senior", 100.0, 4);

    return 0;
}

void showFees(string memberType, double rate, int months) {
    cout << endl;
         << "Membership Type : " << memberType << "     "
         << "Montyle rate $ " << rate << endl;
         << "Number of months: " << months << endl;
         << "Total charges   : $" << (rate * months)
         << endl << endl;
}