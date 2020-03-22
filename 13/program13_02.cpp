// program13_02.cpp
// this program demonstrates the use of an ostringstream
// object to do sophisticated formatting
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


// function prototype
string dollarFormat(double);

int main() {
    const int ROWS = 3, COLS = 2;
    double amount[ROWS][COLS] = {
        184.45,     7,   59.13,
         64.32,   7.29,   1280
    };

    // format table of dollar amounts right justified
    // in columns of width 10
    cout << right;

    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLS; column++) {
            cout << setw(10) << dollarFormat(amount[row][column]);
        }
        cout << endl;
    }
    return 0;
}


/*
 * formats a dollar amount
 */
string dollarFormat(double amount) {
    // create ostringstream object
    ostringstream outStr;

    // set up format information and write to outStr
    outStr << showpoint << fixed << setprecision(2);
    outStr << '$' << amount;

    // extract and return the string inside outStr
    return outStr.str();
}

